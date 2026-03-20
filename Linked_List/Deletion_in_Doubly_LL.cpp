// // Deletion of HEAD 

// #include <bits/stdc++.h>
// using namespace std;

// // struct Node{
// //     int data;
// //     Node* next;
// //     Node* back;

// //     Node(int data1,Node* next1,Node* back1){
// //         data=data1;
// //         next=next1;
// //         back=back1;
// //     }

// //     Node(int data1){
// //         data=data1;
// //         next=nullptr;
// //         back=nullptr;
// //     }
// // };

// // Node* Convert2DLL(vector <int> &arr){
// //     Node* head=new Node(arr[0]);
// //     Node* prev=head;

// //     for(int i=1;i<arr.size();i++){
// //         Node* temp=new Node(arr[i],nullptr,prev);
// //         prev->next=temp;
// //         prev=temp;
// //     }
// //     return head;
// // }

// // Node* Deletehead(Node* head){

// //     Node* prev=head;
// //     head = head->next;

// //     head->back=nullptr;
// //     prev->next=nullptr;

// //     delete prev;
// //     return head;

// // }

// // void printDLL(Node* head){
// //     while(head!=NULL){
// //         cout << head->data << " ";
// //         head=head->next;
// //     }
// // }

// // int main(){
// //     vector <int> arr={1,10,2,3,4,5};
// //     Node* head=Convert2DLL(arr);
// //     head=Deletehead(head);
// //     printDLL(head);
// //     return 0;
// // }

// // Deletion of TAIL 

// struct Node{
//     int data;
//     Node* next;
//     Node* back;

//     Node(int data1,Node* next1,Node* back1){
//         data=data1;
//         next=next1;
//         back=back1;
//     }

//     Node(int data1){
//         data=data1;
//         next=nullptr;
//         back=nullptr;
//     }
// };

// Node* Convert2DLL(vector <int> &arr){
//     Node* head=new Node(arr[0]);
//     Node* prev=head;

//     for(int i=1;i<arr.size();i++){
//         Node* temp=new Node(arr[i],nullptr,prev);
//         prev->next=temp;
//         prev=temp;
//     }
//     return head;
// }

// Node* DeleteTail(Node* head){
//     if(head==NULL || head->next==NULL){
//         return NULL;
//     }
    
//     Node* tail=head;
//     while(tail->next!=NULL){
//         tail=tail->next;
//     }

//     Node* newtail=tail->back;
//     newtail->next=nullptr;
//     tail->back=nullptr;
//     delete tail;
//     return head;
// }

// void printDLL(Node* head){
//     while(head!=NULL){
//         cout << head->data << " ";
//         head=head->next;
//     }
// }

// int main(){
//     vector <int> arr={1,10,2,3,4,5};
//     Node* head=Convert2DLL(arr);
//     head=DeleteTail(head);
//     printDLL(head);
//     return 0;
// }

// Deletion at kth place

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;

    }

    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convert2dll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;

    }
    return head;
}

Node* deletehead(Node* head){
    Node* temp=head;
    head=head->next;
    head->back=nullptr;
    temp->next=nullptr;

    delete temp;
    return head;
}

Node* deletetail(Node* head){
    Node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    Node* newtail=temp->back;
    newtail->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;

}


Node* deletekthpos(Node* head,int k){
    
    Node* temp=head;
    int cnt=0;

    while(temp!=NULL){

        cnt++;
        temp=temp->next;

        if(cnt==k){

        }
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        
        if(head->next && head->back == NULL){
            return NULL;
        }

        if(head->back==NULL){
            deletehead(head);
        }        

    }


  


}


void printdll(Node* head){
    while(head!=NULL){
        cout << head->data << " ";
        head=head->next;
    }
}

int main(){
    vector <int> arr={1,2,3,4,5};
    Node* head=convert2dll(arr);
    printdll(head);
}
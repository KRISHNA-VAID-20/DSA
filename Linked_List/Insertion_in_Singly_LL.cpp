// // Insertion at front 

#include <bits/stdc++.h>
using namespace std;

// struct Node{
//     int data;
//     Node* next;

//     Node(int data1,Node* next1){
//         data=data1;
//         next=next1;
//     }
//     Node(int data1){
//         data=data1;
//         next=nullptr;
//     }

// };

// Node* convert2LL(vector <int> &arr){
//     Node* head=new Node(arr[0]);
//     Node* mover=head;

//     for(int i=1;i<arr.size();i++){
//         Node* temp=new Node(arr[i]);
//         mover->next=temp;
//         mover=temp;
//     }
//     return head;
// }

// void printLL(Node* head){
//     Node* temp=head;
//     while(temp){
//         cout << temp->data << " ";
//         temp=temp->next;
//     }
// }

// Node* insertatfront(int val,Node* head){
//     return new Node(val,head);
// }

// int main(){
//     vector <int> arr={1,2,3,4,5};
//     Node* head=convert2LL(arr);
//     head=insertatfront(100,head);
//     head=insertatfront(200,head);

//     printLL(head);
// }

// // Insertion at End 


// struct Node{
//     int data;
//     Node* next;

//     Node(int data1,Node* next1){
//         data=data1;
//         next=next1;
//     }
//     Node(int data1){
//         data=data1;
//         next=nullptr;
//     }

// };

// Node* convert2LL(vector <int> &arr){
//     Node* head=new Node(arr[0]);
//     Node* mover=head;

//     for(int i=1;i<arr.size();i++){
//         Node* temp=new Node(arr[i]);
//         mover->next=temp;
//         mover=temp;
//     }
//     return head;
// }

// void printLL(Node* head){
//     Node* temp=head;
//     while(temp){
//         cout << temp->data << " ";
//         temp=temp->next;
//     }
// }

// Node* insertatend(int val,Node* head){
//     if(head==NULL){
//         return new Node(val);
//     }

//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     Node* newNode=new Node(val);
//     temp->next=newNode;
//     return head;

// }

// int main(){
//     vector <int> arr={1,2,3,4,5};
//     Node* head=convert2LL(arr);
//     head=insertatend(100,head);

//     printLL(head);
// }

// Insertion at Postion 

// struct Node{
//     int data;
//     Node* next;

//     Node(int data1,Node* next1){
//         data=data1;
//         next=next1;
//     }
//     Node(int data1){
//         data=data1;
//         next=nullptr;
//     }

// };

// Node* convert2LL(vector <int> &arr){
//     Node* head=new Node(arr[0]);
//     Node* mover=head;

//     for(int i=1;i<arr.size();i++){
//         Node* temp=new Node(arr[i]);
//         mover->next=temp;
//         mover=temp;
//     }
//     return head;
// }

// void printLL(Node* head){
//     Node* temp=head;
//     while(temp){
//         cout << temp->data << " ";
//         temp=temp->next;
//     }
// }

// Node* insertatposition(Node* head,int val,int k){
//     if(head==NULL){
//         if(k==1){
//             return new Node(val);
//         }
//         else{
//             return head;
//         }
//     }

//     if(k==1){
//         return new Node(val,head);
//         return head;
//     }

//     int cnt=0;
//     Node* temp=head;

//     while(temp!=NULL){
//         cnt++;
//         if(cnt==(k-1)){
//             Node* newNode=new Node(val,temp->next);
//             temp->next=newNode;

//         }
//         temp=temp->next;
//     }
//     return head;
// }

// int main(){
//     vector <int> arr={1,2,3,4,5};
//     Node* head=convert2LL(arr);
//     head=insertatposition(head,100,2);

//     printLL(head);
// }

struct Node{
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }

};

Node* convert2LL(vector <int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void printLL(Node* head){
    Node* temp=head;
    while(temp){
        cout << temp->data << " ";
        temp=temp->next;
    }
}

Node* insertbeforeValue(Node* head,int el,int val){
    if(head==NULL){
        return NULL;
    }
    if(head->data==val){
        return new Node(el,head);
    }
    Node* temp=head;

    while(temp->next!=NULL){
        if(temp->next->data==val){
            Node* newNode=new Node(el,temp->next);
            temp->next=newNode;
            break;

        }
        temp=temp->next;
    }
    return head;
}

int main(){
    vector <int> arr={1,2,3,4,5};
    Node* head=convert2LL(arr);
    head=insertbeforeValue(head,100,6);

    printLL(head);
}
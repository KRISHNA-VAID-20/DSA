// Reverse of Doubly Linked List usign Stack Data Structure 
// Brute Force Approach 

#include <bits/stdc++.h>
using namespace std;

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

// Node* convert2DLL(vector <int> &arr){
//     Node* head=new Node(arr[0]);
//     Node* prev=head;

//     for(int i=1;i<arr.size();i++){
//         Node* temp=new Node(arr[i],nullptr,prev);
//         prev->next=temp;
//         prev=temp;
//     }
//     return head;
// }

// Node* reverseDLL(Node* head){
//     Node* temp=head;

//     stack <int> st;

//     while(temp!=NULL){
//         st.push(temp->data);
//         temp=temp->next;
//     }

//     temp=head;

//     while(temp!=NULL){
//         temp->data=st.top();
//         st.pop();
//         temp=temp->next;
//     }

//     return head;
// }

// void printDLL(Node* head){
//     while(head!=NULL){
//         cout << head->data << " ";
//         head=head->next;
//     }
// }


// int main(){
//     vector <int> arr={1,2,3,4,5};
//     Node* head=convert2DLL(arr);
//     printDLL(head);
//     head=reverseDLL(head);
//     cout << "\n";
//     printDLL(head);
//     return 0;


// }

// Optimal Approach 

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

Node* convert2DLL(vector <int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* reverseDLL(Node* head){
    Node* curr=head;

    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next=curr->back;
        curr->back=temp;
        
        head=curr;
        curr=temp;

    }
    return head;

}


void printDLL(Node* head){
    while(head!=NULL){
        cout << head->data << " ";
        head=head->next;
    }
}


int main(){
    vector <int> arr={1,2,3,4,5};
    Node* head=convert2DLL(arr);
    printDLL(head);
    cout << "\n";
    head=reverseDLL(head);
    printDLL(head);
    return 0;

}
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

Node* convert2dll(vector <int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;

}

// Delete head 

Node* deletehead(Node* head){
    Node* temp=head;
    head=head->next;
    head->back=nullptr;
    temp->next=nullptr;

    delete temp;
    return head;
}

// delete tail

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


void printdll(Node* head){
    while(head!=NULL){
        cout << head->data << " ";
        head=head->next;
    }
}


int main(){
    vector <int> arr={1,2,3,4,5};
    Node* head=convert2dll(arr);
    // head=deletehead(head);
    head=deletetail(head);
    printdll(head);

}
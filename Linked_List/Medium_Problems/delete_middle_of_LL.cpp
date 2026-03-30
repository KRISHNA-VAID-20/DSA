// Time Complexity - O(N)
// Space complexity = O(1)

// Optimal Soln using Torotise & hare

#include <bits/stdc++.h>
using namespace std;

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
    Node* temp=head;

    for(int i=1;i<arr.size();i++){
        Node* newNode=new Node(arr[i]);
        temp->next=newNode;
        temp=newNode;

    }
    return head;
}

Node* removeMiddleNode(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    fast=fast->next->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    Node* middlenode=slow->next;
    slow->next=slow->next->next;

    delete middlenode;
    return head;

    
}

void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}

int main(){
    vector <int> arr={1,2,3,4,5,6};
    Node* head=convert2LL(arr);
    printLL(head);
    cout << '\n';
    head=removeMiddleNode(head);
    printLL(head);
  
   
    return 0;
}
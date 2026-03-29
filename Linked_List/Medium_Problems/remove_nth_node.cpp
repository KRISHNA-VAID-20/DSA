// Time Complexity - O(lenght)
// Space complexity = O(1)

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

Node* removeNthNode(Node* head,int n){
    Node* slow=head;
    Node* fast=head;

    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    if(fast==NULL) return head->next;

    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    Node* delNode=slow->next;
    slow->next=slow->next->next;
    free (delNode);
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
    vector <int> arr={1,2,3,4,5};
    Node* head=convert2LL(arr);
    printLL(head);
    head=removeNthNode(head,2);
    cout << '\n';
    printLL(head);
  
   
    return 0;
}
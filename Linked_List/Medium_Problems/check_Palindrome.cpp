// Time Complexity - O(N)
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

Node* reverseLL(Node* head){
    Node* temp=head;
    Node* prev=nullptr;

    while(temp!=NULL){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

bool ispalindrome(Node* head){
    if(head==NULL || head->next==NULL)return true;
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* newHead=reverseLL(slow->next);
    Node* first=head;
    Node* second=newHead;

    while(second!=NULL){
        if(first->data!=second->data){
            reverseLL(newHead);
            return false;
        }
        first=first->next;
        second=second->next;
    }
    reverseLL(newHead);
    return true;
}

void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}

int main(){
    vector <int> arr={1,2,3,3,2,1};
    Node* head=convert2LL(arr);
    printLL(head);
    cout << '\n';
    if(ispalindrome(head)==0){
        cout << "False";
    }
    else{
        cout << "True";

    }
    return 0;
  
   
    return 0;
}
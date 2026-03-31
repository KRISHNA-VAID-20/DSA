// brute force --
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

Node* sortLL(Node* head){
    vector <int> temparray;
    
    Node* temp=head;
    int i=0;
    while(temp!=NULL){
        temparray.push_back(temp->data);
        temp=temp->next;
    }

    sort(temparray.begin(),temparray.end());

    temp=head;

    while(temp!=NULL){
        temp->data=temparray[i];
        i++;
        temp=temp->next;

    }

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
    vector <int> arr={10,67,4,3,6,7,};
    Node* head=convert2LL(arr);
    printLL(head);
    head=sortLL(head);
    cout << '\n';
    printLL(head);
  
   
    return 0;
}
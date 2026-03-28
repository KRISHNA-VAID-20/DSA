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

Node* oddevenLL(Node* head){
    Node* odd=head;
    Node* even=head->next;
    Node* evenhead=head->next;

    while(even!=NULL && even->next!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;
    }
    odd->next=evenhead;
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
    head=oddevenLL(head);
    cout << "\n";
    cout << head->data ;
   
    return 0;
}
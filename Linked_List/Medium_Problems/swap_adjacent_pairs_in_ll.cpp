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

Node* swapAdjacent(Node *head){
    Node* dummy=new Node(0);
    dummy->next=head;
    Node* prev=dummy;

    while(prev->next && prev->next->next){
        Node* a = prev->next;
        Node* b = a->next;

        a->next=b->next;
        b->next=a;
        prev->next=b;

        prev=a;
    }
    return dummy->next;

}

int main(){

    vector <int> arr={1,2,3,4};
    Node* head=convert2LL(arr);
    printLL(head);
    cout << '\n';
    head=swapAdjacent(head);
    printLL(head);
    return 0;

}
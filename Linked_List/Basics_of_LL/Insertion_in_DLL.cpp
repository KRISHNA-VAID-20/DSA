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

Node* insertbeforeHead(Node* head,int val){
    Node* prev=head;
    Node* newHead=new Node(val,prev,nullptr);
    prev->back=newHead;
    return newHead;
}

Node* insertbeforeTail(Node* head,int val){
    Node* tail=head;

    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev=tail->back;
    Node* newTail=new Node(val,tail,prev);
    prev->next=newTail;
    tail->back=newTail;
    return head;
}

Node* insertatknode(Node* head,int val,int k){
    Node* temp=head;
    if(k==1){
        return insertbeforeHead(head,val);
    }
    int cnt=0;

    while(temp!=NULL){
        cnt++;
        if(cnt==k)break;
        temp=temp->next;
    }

    Node* prev=temp->back;

    Node* insertval=new Node(val,temp,prev);

    prev->next=insertval;
    temp->back=insertval;

    return head;


}


void printdll(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}



int main(){
    vector <int> arr={1,2,3,4,5};
    Node* head=convert2DLL(arr);
    // head=insertbeforeHead(head,10);
    // head=insertbeforeTail(head,6);
    // head=insertatknode(head,100,2);
    printdll(head);
}
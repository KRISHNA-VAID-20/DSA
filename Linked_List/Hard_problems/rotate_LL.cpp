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

Node* findkthNode(Node* temp,int k){
    int cnt=1;
    while(temp!=NULL){
        if(cnt==k)return temp;
        temp=temp->next;
        cnt++;
    }
    return temp;
}

Node* rotatebyk(Node* head,int k){
    Node* tail=head;
    int len=1;
    while(tail->next!=NULL){
        tail=tail->next;
        len++;
    }

    if(k % len==0)return head;

    k=k % len;

    tail->next=head;
    Node* newLastNode=findkthNode(head,len-k);
    head=newLastNode->next;
    newLastNode->next=NULL;

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
    cout << '\n' ;
    head=rotatebyk(head,12);
    printLL(head); 
    return 0;
}


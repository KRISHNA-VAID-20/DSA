// Time Complexity - O(N)
// Space complexity = O(1)

// Brute Force using hashing (map)

// Optimal using - Tortise&hare method

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

int findLength(Node* slow,Node* fast){
    int cnt=1;
    fast=fast->next;

    while(slow!=fast){
        cnt++;
        fast=fast->next;
    }
    return cnt;
}



int Lengthofloop(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return findLength(slow,fast);
        }
    }
    return 0;
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
    int len=Lengthofloop(head);
    cout << "\n";
    cout << len << endl;

    return 0;
}
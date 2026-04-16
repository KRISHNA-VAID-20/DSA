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

Node* findmid(Node* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node* slow=head;
        Node* fast=head->next;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

Node* mergetwoLists(Node* L1,Node* L2){
        Node* t1=L1;
        Node* t2=L2;

        Node* dummyNode=new Node(-1);
        Node* temp=dummyNode;

        while(t1!=NULL && t2!=NULL){
            if(t1->data<t2->data){
                temp->next=t1;
                temp=t1;
                t1=t1->next;
            }
            else{
                temp->next=t2;
                temp=t2;
                t2=t2->next;
            }
        }
        if(t1) temp->next=t1;
        else temp->next=t2;

        return dummyNode->next;
    }

Node* sortList(Node* head) {
        if(head==NULL || head->next==NULL) return head;
        Node* mid=findmid(head);
        Node* right=mid->next;
        mid->next=nullptr;
        Node* left=head;

        left=sortList(left);
        right=sortList(right);

        return mergetwoLists(left,right);

        
    }

Node* Removeduplicate(Node* head){
    if(head==NULL|| head->next==NULL)return head;
    Node* temp=head;

    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}


int main(){

    vector <int> arr={3,3,2,1,2,1,4,5};
    Node* head=convert2LL(arr);
    printLL(head);
    cout << '\n';
    head=sortList(head);
    printLL(head);
    cout << '\n';
    head=Removeduplicate(head);
    printLL(head);

    return 0;

}
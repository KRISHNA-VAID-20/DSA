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

Node* convert2dll(vector <int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

// delete head

Node* dhead(Node* head){
    Node* temp=head;
    head=head->next;
    head->back=nullptr;
    free(temp);
    return head;
}

// delete tail

Node* dtail(Node* head){
    Node* temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    Node* newtail=temp->back;
    newtail->next=nullptr;
    temp->back=nullptr;
    free (temp);
    return head;
    
}

Node* datk(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    
    int cnt=0;
    Node* knode=head;
    
    while(knode!=NULL){
        cnt++;
        if(cnt==k) break;
        knode=knode->next;
        
    }
    
    Node* prev=knode->back;
    Node* front=knode->next;
    
    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return dhead(head);
    }
    else if(front==NULL){
        return dtail(head);
    }
    
    prev->next=front;
    front->back=prev;
    
    knode->next=nullptr;
    knode->back=nullptr;
    free(knode);
    return head;
    
}


void printdll(Node* head){
    
    // Node* temp=head;
    while(head!=NULL){
        cout << head->data << " ";
        head=head->next;
    }

}


int main(){
    vector <int> arr={1,2,3,4,5};
    Node* head=convert2dll(arr);
    // head=dhead(head);
    // head=dtail(head);
    head=datk(head,2);
    printdll(head);
}
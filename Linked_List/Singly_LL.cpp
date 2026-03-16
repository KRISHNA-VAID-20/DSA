// Basic Decalaration of Linked List

#include <bits/stdc++.h>
using namespace std;
struct Node{
    // public: for class instead of struct
    int data;
    Node* next;

    // public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};

int main(){

    vector<int> arr={1,2,3,4,5};
    
    Node* y=new Node(arr[2],nullptr);
    cout << y->data;
    
    return 0;

}

// Array to LL

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

// Node* convert2LL(vector <int> &arr){
//     Node* head=new Node(arr[0]);
//     Node* mover=head;

//     for(int i=1;i<arr.size();i++){
//         Node* temp=new Node(arr[i]);
//         mover->next=temp;
//         mover=temp;

//     }
//     return head;
// }

int main(){
    vector <int> arr={1,2,3,4,5};
    // Node* head=convert2LL(arr);
    // cout << head->data;
}

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

int checkifpresent(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val)return 1;
        temp=temp->next;
    }
    return 0;
}

int main(){
    vector <int> arr={1,2,3,4,5};
    Node* head=convert2LL(arr);
    Node* temp=head;

    // for(int i=0;i<arr.size();i++){
    //     cout << temp->data <<  endl;
    //     temp=temp->next;
    // }

    int cnt=0;

    while(temp){
        cout << temp->data << endl;
        temp=temp->next;
        cnt+=1;
    }
    cout << "Length = " << cnt << endl;

    cout << checkifpresent(head,50) << endl;
}


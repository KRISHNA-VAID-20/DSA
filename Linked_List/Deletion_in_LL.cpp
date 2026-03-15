// // Deletion at front (head)

// #include <bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;

//     Node(int data1){
//         data=data1;
//         next=nullptr;
//     }
// };

// Node* converttoLL(vector <int> &arr){
//     Node* head=new Node(arr[0]);
//     Node* mover=head;
//     for(int i=1;i<arr.size();i++){
//         Node* temp=new Node(arr[i]);
//         mover->next=temp;
//         mover=temp;
//     }
//     return head;

// }

// Node* deletehead(Node* head){
//     if(head==NULL) return head;

//     Node* temp=head;
//     head=head->next;
//     free(temp);
//     return head;
// }


// int main(){
//     vector <int> arr={1,2,3,4,5};
//     Node* head=converttoLL(arr);
//     head=deletehead(head);
//     // cout << head->data;
//     Node* temp=head;
//     while(temp){
//         cout << temp->data;
//         temp=temp->next;
//     }
// }

// // Deletion at end (tail)

// #include <bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;

//     Node(int data1){
//         data=data1;
//         next=nullptr;
//     }
// };

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

// Node* deleteatend(Node* head){
//     if(head==NULL || head->next==NULL) return NULL;
//     Node* temp=head;

//     while(temp->next->next!=NULL){
//         temp=temp->next;
//     }

//     free(temp->next);
//     temp->next=nullptr;

//     return head;
    
// }


// int main(){
//     vector <int> arr={1,2,3,4,5};
//     Node* head=convert2LL(arr);
//     head=deleteatend(head);
//     Node* temp=head;
//     while(temp){
//         cout << temp->data << " ";
//         temp=temp->next;
//     }
// }

// // Deletion at particular point in Linked List 

// #include <bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;

//     Node(int data1){
//         data=data1;
//         next=nullptr;
//     }
// };

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

// Node* deletek(Node* head,int k){
//      if(head==NULL)return head;
     
//      if(k==1){
//         Node* temp=head;
//         head=head->next;
//         free(temp);
//         return head;
//      }

//      int cnt=0;
//      Node* temp=head;
//      Node* prev=NULL;

//      while(temp!=NULL){
//         cnt++;
//         if(cnt==k){
//             prev->next=prev->next->next;
//             free(temp);
//             break;
//         }
//         prev=temp;
//         temp=temp->next;
//      }
//      return head;
// }


// int main(){
//     vector <int> arr={1,2,3,4,5};
//     Node* head=convert2LL(arr);
//     head=deletek(head,7);
//     Node* temp=head;
//     while(temp){
//         cout << temp->data << " ";
//         temp=temp->next;
//     }
   
// }

// // deletion of the element

// #include <bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;

//     Node(int data1){
//         data=data1;
//         next=nullptr;
//     }
// };

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

// Node* deleteelement(Node* head,int el){
//      if(head==NULL)return head;
     
//      if(head->data==el){
//         Node* temp=head;
//         head=head->next;
//         free(temp);
//         return head;
//      }

//      Node* temp=head;
//      Node* prev=NULL;

//      while(temp!=NULL){
//         if(temp->data==el){
//             prev->next=prev->next->next;
//             free(temp);
//             break;
//         }
//         prev=temp;
//         temp=temp->next;
//      }
//      return head;
// }


// int main(){
//     vector <int> arr={1,2,3,4,5};
//     Node* head=convert2LL(arr);
//     head=deleteelement(head,10);
//     Node* temp=head;
//     while(temp){
//         cout << temp->data << " ";
//         temp=temp->next;
//     }
   
// }
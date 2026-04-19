// class Solution {
// public:
//     ListNode* swapNodes(ListNode* head, int k) {
//         ListNode* first=head;
//         ListNode* Second=head;
//         ListNode* temp=head;

//         for(int i=1;i<k;i++){
//             first=first->next;
//         }

//         temp=first;
//         while(temp->next!=NULL){
//             temp=temp->next;
//             Second=Second->next;
//         }

//         int t=first->val;
//         first->val=Second->val;
//         Second->val=t;

        
//         return head;
//     }
// };
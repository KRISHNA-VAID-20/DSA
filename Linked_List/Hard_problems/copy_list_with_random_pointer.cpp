// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;
    
//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         if (!head) return NULL;

//         Node* curr = head;
//         while (curr) {
//             Node* newNode = new Node(curr->val);
//             newNode->next = curr->next;
//             curr->next = newNode;
//             curr = newNode->next;
//         }

//         curr = head;
//         while (curr) {
//             if (curr->random) {
//                 curr->next->random = curr->random->next;
//             }
//             curr = curr->next->next;
//         }

//         curr = head;
//         Node* newHead = head->next;
        
//         while (curr) {
//             Node* copy = curr->next;
//             curr->next = copy->next;
            
//             if (copy->next) {
//                 copy->next = copy->next->next;
//             }
            
//             curr = curr->next;
//         }

//         return newHead;
//     }
// };
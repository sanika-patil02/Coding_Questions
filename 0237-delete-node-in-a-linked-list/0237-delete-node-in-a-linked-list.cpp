/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

// Time Complexity-o(1),Space Complexity-o(1)
        // ListNode* temp=node->next;
        // node->val=temp->val;
        // node->next=temp->next;

// OR
        node->val=node->next->val;
        node->next=node->next->next;
        
    }
};
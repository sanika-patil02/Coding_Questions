/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
//Brute Force Approach-Time Complexity o(n)+o(n/2)
        ListNode *curr=head;
        int count=0;
        int mid;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        mid=(count/2)+1;

        count=1;
        curr=head;
        while(count!=mid){
            count++;
            curr=curr->next;
        }
        return curr;
        
// Optimal Approach-Fast & Slow Pointer-Time Complexity o(n/2)
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
        
    }
};
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
//Brute Force Approach-Time Complexity o(2m)
// Space Complexity-o(1) 
        // ListNode *curr=head;
        // ListNode *prev=head;
        // ListNode *delptr=NULL;
        // int count=0;
        // while(curr!=NULL){
        //     curr=curr->next;
        //     count++;
        // }
        // int del=count-n+1;
        // count=1;
        // curr=head;
        // while(count!=del){
        //     prev=curr;
        //     curr=curr->next;
        //     count++;
        // }
        // delptr=curr;
        // prev->next=curr->next;
        // if(delptr==head){
        //     head=head->next;
        //     prev=NULL;
        // }
        // delete delptr;
        // return head;

// Optimal Approach-Time Complexity O(n)
// Space Complexity-o(1)

ListNode *start=new ListNode();
start->next=head;
ListNode *fast=start;
ListNode *slow=start;

for(int i=1;i<=n;i++){
    fast=fast->next;
}

while(fast->next!=NULL){
    fast=fast->next;
    slow=slow->next;
}
slow->next=slow->next->next;
return start->next;
        
    }
};
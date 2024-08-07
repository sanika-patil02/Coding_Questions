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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
// Brute-Force Approach-Time Complexity o(n1+n2)
// Space Complexity-o(n1+n2),here n1=length of 1st Linkedlist,n2=length of 2nd Linkedlist
        // if(list1==NULL) return list2;
        // if(list2==NULL) return list1;

        // ListNode *head=new ListNode();
        // ListNode *curr1=list1;
        // ListNode *curr2=list2;
        // if((curr1->val) < (curr2->val)){
        //     head->val=curr1->val;
        //     head->next=NULL;
        //     curr1=curr1->next;
        // }
        // else{
        //     head->val=curr2->val;
        //     head->next=NULL;
        //     curr2=curr2->next;
        // }
        // ListNode *curr=head;
        // while(curr1!=NULL && curr2!=NULL){
        //     ListNode *n=new ListNode();
        //     if((curr1->val) < (curr2->val)){
        //         n->val=curr1->val;
        //         n->next=NULL;
        //         curr->next=n;
        //         curr=curr->next;
        //         curr1=curr1->next;
        //     }
        //     else{
        //         n->val=curr2->val;
        //         n->next=NULL;
        //         curr->next=n;
        //         curr=curr->next;
        //         curr2=curr2->next;
        //     }
        // }
        // while(curr1!=NULL){
        //     ListNode *n=new ListNode();
        //     n->val=curr1->val;
        //     n->next=NULL;
        //     curr->next=n;
        //     curr=curr->next;
        //     curr1=curr1->next;
        // }
        //  while(curr2!=NULL){
        //     ListNode *n=new ListNode();
        //     n->val=curr2->val;
        //     n->next=NULL;
        //     curr->next=n;
        //     curr=curr->next;
        //     curr2=curr2->next;
        // }
        // return head;

// OR

        // if(list1==NULL) return list2;
        // if(list2==NULL) return list1;

        // ListNode *dummy=new ListNode();
        // ListNode *curr=dummy;
        // ListNode *curr1=list1;
        // ListNode *curr2=list2;

        // while(curr1!=NULL && curr2!=NULL){
        //     ListNode *n=new ListNode();
        //     if((curr1->val) < (curr2->val)){
        //         n->val=curr1->val;
        //         n->next=NULL;
        //         curr->next=n;
        //         curr=curr->next;
        //         curr1=curr1->next;
        //     }
        //     else{
        //        n->val=curr2->val;
        //        n->next=NULL;
        //        curr->next=n;
        //        curr=curr->next;
        //        curr2=curr2->next;
        //     }
        // }

        // while(curr1!=NULL){
        //     ListNode *n=new ListNode();
        //     n->val=curr1->val;
        //     n->next=NULL;
        //     curr->next=n;
        //     curr=curr->next;
        //     curr1=curr1->next;
        // }

        // while(curr2!=NULL){
        //     ListNode *n=new ListNode();
        //     n->val=curr2->val;
        //     n->next=NULL;
        //     curr->next=n;
        //     curr=curr->next;
        //     curr2=curr2->next;
        // }
        
        // ListNode *head=dummy->next;
        // delete dummy;

        // return head;

// Optimal Approach-Time Complexity o(n1)+o(n2)
// Space Complexity-o(1)

// if(list1==NULL) return list2;
// if(list2==NULL) return list1; 

// ListNode *dummy=new ListNode();
// ListNode *curr=dummy;
// ListNode *curr1=list1;
// ListNode *curr2=list2;

// while(curr1!=NULL && curr2!=NULL){
//     if((curr1->val) < (curr2->val)){
//         curr->next=curr1;
//         curr=curr->next;
//         curr1=curr1->next;
//     }
//     else{
//         curr->next=curr2;
//         curr=curr->next;
//         curr2=curr2->next;
//     }
// }
// while(curr1!=NULL){
//     curr->next=curr1;
//     curr=curr->next;
//     curr1=curr1->next;
// }
// while(curr2!=NULL){
//     curr->next=curr2;
//     curr=curr->next;
//     curr2=curr2->next;
// }
// ListNode *head=dummy->next;
// delete dummy;

// return head;


// OR
// l1 points to smaller no
ListNode *l1=list1;
ListNode *l2=list2;

if(l1==NULL) return l2;
if(l2==NULL) return l1;

if((l1->val) > (l2->val)){
    swap(l1,l2);
}
ListNode *res=l1;

while(l1!=NULL && l2!=NULL){
ListNode *prev=NULL;
while(l1!=NULL && (l1->val) <= (l2->val)){
    prev=l1;
    l1=l1->next;
}
prev->next=l2;

swap(l1,l2);

}
    return res;
    }
};
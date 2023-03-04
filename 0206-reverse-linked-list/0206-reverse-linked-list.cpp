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
    ListNode* reverseList(ListNode* head) {
        // node for creation of a reversed list
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr){
            // the temp node to store the add of the next node 
            // address of 2 for instance state of 1->2 reversal
            ListNode* next=curr->next;
            // now breaking the current next link and connecting to the new list
            curr->next=prev;
            // change the new prev
            prev=curr;
            // change the new current
            curr=next;  
        }
        return prev; // prev is to be returned as prev becomes the new head when c
        // curr becomes null 
    }
};
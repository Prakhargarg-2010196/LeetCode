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
    // usage of the reverse the linked list code and finding the middle code 
    ListNode* middleNode(ListNode* head) {
      
     ListNode* slow=head;
     ListNode* fast=head;
     while(fast&&fast->next){// two nodes must be present after the middle node
         slow=slow->next;
         fast=fast->next->next;// movement of pointer twice 
     }
        return slow;
    }
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
    bool isPalindrome(ListNode* head) {
        ListNode* middle=middleNode(head);
        ListNode* reversedHead=reverseList(middle);
        ListNode* temp=head;
        ListNode* temp2=reversedHead;
        while(temp&&temp2){
            if(temp->val!=temp2->val){
                return false; 
            }
            temp=temp->next;
            temp2=temp2->next;
        }
        return true;
    }
};
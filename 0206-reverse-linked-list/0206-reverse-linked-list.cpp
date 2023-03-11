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
        // iterative approach
        // node for creation of a reversed list
        // ListNode* prev=NULL;
        // ListNode* curr=head;
        // while(curr){
        //     // the temp node to store the add of the next node 
        //     // address of 2 for instance state of 1->2 reversal
        //     ListNode* next=curr->next;
        //     // now breaking the current next link and connecting to the new list
        //     curr->next=prev;
        //     // change the new prev
        //     prev=curr;
        //     // change the new current
        //     curr=next;  
        // }
        // return prev; // prev is to be returned as prev becomes the new head when c
        // curr becomes null 
        
        //recursive approach
        
        // Base Case
        if(!head||!(head->next)){
            return head;// when the list is empty or the last node is reached.
        }
        
        // Hypothesis : bringhing the last node in reverse order
        ListNode* newHead=reverseList(head->next);
        
        // Induction
        
        // as we are returned with last reversed node at the call of the second last node 
        // make the last reversed node's next to be second last node or the current node;
        head->next->next=head;
        // so that for the first node in list the next pointer points to NULL(??)
        head->next=NULL;        
        return newHead;
    }
};
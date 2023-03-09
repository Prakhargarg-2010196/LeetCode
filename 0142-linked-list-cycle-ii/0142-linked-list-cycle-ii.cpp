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
    ListNode *detectCycle(ListNode *head) {
        if(!head||!(head->next)){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        if(slow==fast){
            
            ListNode* meetingPoint=slow;
            ListNode* startList=head;
            // after the cycle is reached then if we start a pointer from start of list and another from the meeting point then they would meet at the starting point of the loop
            while(meetingPoint!=startList){
                startList=startList->next;
                meetingPoint=meetingPoint->next;    
            }
            return meetingPoint;
            
        }
    }    
        return NULL;
    }
};
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
    bool hasCycle(ListNode *head) {
        // whole logic of moving fast more is that fast would eventually reach the slow and if there was no cycle it would become null instead of meeting the slow 
        // instead of two steps we could have moved the pointer with different ratio for speeds but experimentally we would get more optimised results with two steps for fast and one step for slow.
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};
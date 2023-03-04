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
     // OA: find the middle using slow fast pointer
        // here the after every two nodes the middle value changes 
        // for example for 1 middle=1 for 2 middle=2 for 3 middle =2 but for 4 middle=3 so we can see that two nodes must be there before the middle therefore movement of the fast node or the count node must be twice as of the answer or slow node. 
     ListNode* slow=head;
     ListNode* fast=head;
     while(fast&&fast->next){// two nodes must be present after the middle node
         slow=slow->next;
         fast=fast->next->next;// movement of pointer twice 
     }
        return slow;
    }
};
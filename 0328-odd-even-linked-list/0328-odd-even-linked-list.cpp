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
    ListNode* oddEvenList(ListNode* head) {
        
        if(!head||!head->next)
            return head;
        
        ListNode* oddTraverse=head;
        ListNode* evenTraverse=head->next;
        ListNode* evenHead=head->next;
        while(oddTraverse->next!=NULL&&evenTraverse->next!=NULL){
            
            //connect to next odd node
            oddTraverse->next=oddTraverse->next->next;
            //connect to next even node
            evenTraverse->next=evenTraverse->next->next;
/* Traversal of pointers is necessary because without it the connections would not be made*/            
            //traverse to next odd position
            oddTraverse=oddTraverse->next;
            //traverse to next odd position
            evenTraverse=evenTraverse->next;
            
            
        }
        oddTraverse->next=evenHead;
        
        return head;
        
    }
};
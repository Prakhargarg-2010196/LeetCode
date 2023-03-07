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
        
        if(head==NULL)
        {
            return {};
        }
        if(head->next==NULL||head->next->next==NULL){
            return head;
        }
        ListNode* oldEvenHead=head->next;// to connect even to the end of the odd list    
        ListNode* oddTr=head;// for odd traversal
        ListNode* evenTr=head->next;// for even traversal
        while(oddTr->next&&evenTr->next){
            oddTr->next=evenTr->next;
            oddTr=oddTr->next;
            evenTr->next=oddTr->next;
            evenTr=evenTr->next;
        }
        oddTr->next=oldEvenHead;
        return head;
    }
};
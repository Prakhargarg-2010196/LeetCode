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
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenFix=head->next;
        while(odd->next!=NULL&&even->next!=NULL){
            ListNode* temp1=odd->next->next;
            ListNode* temp2=even->next->next;
        
            odd->next=temp1;
            even->next=temp2;
            odd=odd->next;
            even=even->next;
        }
      
        odd->next=evenFix;
        return head;
    }
};
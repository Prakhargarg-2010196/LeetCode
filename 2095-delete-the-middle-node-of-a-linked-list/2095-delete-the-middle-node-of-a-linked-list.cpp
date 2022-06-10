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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=head;
        ListNode* temp2=NULL;
        if(head==NULL||head->next==NULL)
            return NULL;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        temp2=slow->next;
        while(temp->next!=slow)
        {   
            temp=temp->next;
        }
        
          temp->next=temp2;
          delete slow;
      
        return head;
    }
    
};
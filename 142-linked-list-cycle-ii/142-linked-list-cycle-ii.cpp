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
        
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp=head;
        if(head==NULL)
            return NULL;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {   
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
            {
                while(slow!=temp)
                {   temp=temp->next;
                    slow=slow->next;                    
                }
                return temp;    
            }
            
        
                                   
                
        }
        
       return NULL;
        
        
    }
};
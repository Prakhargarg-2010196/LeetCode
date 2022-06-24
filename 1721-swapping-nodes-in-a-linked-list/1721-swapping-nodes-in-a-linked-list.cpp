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
    
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first=head;
        ListNode* second=head;
        int m=k;
        while(m>0)
        {
            first=first->next;
            m--;
        }
        if(first==NULL)
        {
            while(second->next!=NULL)
            {
                second=second->next;
            }
            int temp=head->val;
            head->val=second->val;
            second->val=temp;
            return head;
            
        }
        while(first->next!=NULL)
        {
            first=first->next;
            second=second->next;
            
        }
        
        ListNode* end=second->next;
        cout<<end->val;
        second=head;
        cout<<k;
        while(k>1)
        {
            second=second->next;
            k--;
        }
        cout<<second->val;
        int temp=end->val;
        end->val=second->val;
        second->val=temp;
        return head;
        
    }
};
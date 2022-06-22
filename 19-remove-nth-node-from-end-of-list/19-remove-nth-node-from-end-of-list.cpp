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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode* FirstPointer=head;
        /*FirstPointer is moved n spaces away from the other pointer so that when it               reaches the end the SecondPointer reaches the nth node from the end                       automatically
        */ 
     ListNode* SecondPointer=head;
    
     for(int i=0;i<n;i++)
       FirstPointer=FirstPointer->next;
     if(FirstPointer==NULL)
     {
         ListNode* Dummy=head;
         head=head->next;
         delete(Dummy);
         return head;
     
     }
         while(FirstPointer->next!=NULL)
     {
         FirstPointer=FirstPointer->next;
         SecondPointer=SecondPointer->next;
     }
       ListNode* Dummy=SecondPointer->next;
        cout<<Dummy->val<<endl;
        SecondPointer->next=SecondPointer->next->next;
        delete(Dummy);
                
        return head;
    }
};
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
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* Dummy=new ListNode(0);
         ListNode* temp=Dummy;
         int carry=0;
         while(l1!=NULL||l2!=NULL){
            // 1.) Create a new node
             ListNode* current=new ListNode(0);
            // 6.)Adding the calculated carry to the next current->value.
            current->val=carry+current->val;
            // 2.Check if l1 is not null          
             if(l1!=NULL){
             current->val+=l1->val;
             l1=l1->next;
             }
            // 3. Check if l2 is not null          
             if(l2!=NULL){
             current->val+=l2->val;
             l2=l2->next;
            }
            // 4. Calculate carry
            carry=((current->val/10)==0)?0:(current->val)/10;
            // 5. Carry is non-zero
            if(carry>0)
                current->val=current->val%10;

            temp->next=current;
            temp=temp->next; 
            
         }
        // 7. Attach the remaining carry
         if(carry>0){
              ListNode* current=new ListNode(carry);
              temp->next=current;
              temp=temp->next;
         }
        return Dummy->next;
    }
};
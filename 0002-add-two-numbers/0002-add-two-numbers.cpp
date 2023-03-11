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
        ListNode* newListPrev=new ListNode(-1,NULL);
        ListNode* tr=newListPrev;
        int carry=0,digit;
        while(l1||l2||carry){
            // calc sum of two nodes
            int sum=carry;
            // if l1 is not null
            if(l1){
                sum+=l1->val;
            // move the pointers forward
                l1=l1->next;
            }
            // if l2 is not null
             if(l2){
                sum+=l2->val;
                // move the pointers forward
                 l2=l2->next;
                 
            }
            // find the digit/one's place and also the carry 
            digit=sum%10;
            carry=sum/10;
            // store in new node and attach to the new list
            ListNode* newNode=new ListNode(digit,NULL);
            tr->next=newNode;
            tr=tr->next;
            
            
        }
        return newListPrev->next;//stores head of the new List;
    }
};
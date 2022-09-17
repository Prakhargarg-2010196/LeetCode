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
// Related Problems 
class Solution {
public:
//     return middle of the linked list 
    ListNode* middleNode(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
//     return the reverse of the linked list using iteration method
    ListNode* reverseList(ListNode* head){
        ListNode* previous=NULL;
        ListNode* current=head;
        while(current!=NULL){
            ListNode* nextNode=current->next;
            current->next=previous;
            previous=current;
            current=nextNode;
        }
        return previous;
    }
    int pairSum(ListNode* head) {
//      First of the splitted list
        ListNode* firstHalf=head;
//         Middle of the list
        ListNode* middle=middleNode(head);
//         Second half of the splitted list
        ListNode* secondHalf=reverseList(middle);
        int maxSum=0;
        while(firstHalf!=NULL&&secondHalf!=NULL){
            maxSum=max(maxSum,firstHalf->val+secondHalf->val);// to find max 
            firstHalf=firstHalf->next;
            secondHalf=secondHalf->next;
                
            
            
        }   
        return maxSum;
    }
};
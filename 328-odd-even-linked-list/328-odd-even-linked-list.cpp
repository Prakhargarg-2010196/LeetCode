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
//      Handling of the edge case 
        if(head==NULL||head->next==NULL)
            return head;
//         Store the odd position
        ListNode* odd=head;
//         Store the even position
        ListNode* even=head->next;
//         Two connect the odd end to the even end at the  last.
        ListNode* evenFix=head->next;
        while(odd->next!=NULL&&even->next!=NULL){
//             Store the next odd positioned element
            ListNode* temp1=odd->next->next;
//             Store the next even positioned element
            ListNode* temp2=even->next->next;
//              Connect the next odd to the previous odd
            odd->next=temp1;
//              Connect the next even to the previous even
            even->next=temp2;
//             Move odd pointer forward 
            odd=odd->next;
//             Move even pointer forward 
            even=even->next;
        }
//       Connect odd list to the even list 
        odd->next=evenFix;
        return head;
    }
};
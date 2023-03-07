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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head){
            return {};
        }
        if(!head->next){
            return head;
        }
        int n=0;// to store the length of the linked list
        ListNode*tr=head;// to traverse 
        ListNode*tail=NULL;// to store the tail of the linked list
        // to find the length of the list
        while(tr){
            tail=tr;
            n++;
            tr=tr->next;
        }
        // cout<<n<<" "<<tail->val;
        // to remove repeated rotations as the mod will give only the remaining
        // rotations in bound 
        k=k%n;
        if(k==0){
            return head;
        }
        if(k!=0)
            tail->next=head;
        int segregatePoint=n-k;
        int cnt=1;
        tr=head;// reset traverse
        // make the n-k th  node's next to null  
        while(cnt!=segregatePoint){
            cnt++;
            tr=tr->next;
        }
        ListNode*newHead=tr->next;
        tr->next=NULL;
        return newHead;
        
    }
};
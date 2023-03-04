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
        /*We need the (l-n+1)th node from the start which is equivalent to the nth node from the end mathematically 
        BF: 
        1. Find length (O(N))
        2. Find  l-n+1 th node (O(n/2))
        3. remove the node.
        
        OA: 
        As we need the l-n+1 the node
        First we can move to the nth node and we see two observations
        1. there are l-n nodes after that node
        2. after l-n nodes there is null 
        these two observations lead us to conclusion that we need to traverse  
        l-n nodes from the starting to reach the start to reach the l-nth node
        */
        
        // a node before head node to traverse l-n nodes.
        ListNode* beforeHead=new ListNode(-1);
        beforeHead->next=head;
        
        ListNode* current=head;
        int cnt=1;
        // move the current pointer to the nth node;
        while(cnt!=n){
            cnt++;
            current=current->next;
        }
        // for translations we take a new pointer as the before head has to be returned.
        ListNode* temp=beforeHead;
        // doing l-n translations from before the head to reach l-nth node
        while(current!=NULL&&current->next!=NULL){
            temp=temp->next;
            current=current->next;
        }
        // removing the node
        temp->next=temp->next->next;
        return beforeHead->next;
        
    }
};
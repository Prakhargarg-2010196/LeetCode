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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Brute Force 
        // store the nodes in hashmap (as finding takes O(1)) and then compare.
        map<ListNode*,bool>mp;
        ListNode* tr1=headA;
        ListNode* tr2=headB;
        while(tr1){
            // store in map
            mp[tr1]=true;
            tr1=tr1->next;
        }
        while(tr2){
            // check if it exists in map
            if(mp[tr2]==true){
                return tr2;                
            }
            tr2=tr2->next;
        }
        return NULL;
        
        
        // Optimised
        //Intuition
        /*
            We need to find the node with same addr in both lists
            Let 
            x: dist from start of l1 to IP
            y: dist from start of l2 to IP
            g: length from IP to end.
            
            
        
        
        
        */
        
    }
};
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
//         map<ListNode*,bool>mp;
//         ListNode* tr1=headA;
//         ListNode* tr2=headB;
//         while(tr1){
//             // store in map
//             mp[tr1]=true;
//             tr1=tr1->next;
//         }
//         while(tr2){
//             // check if it exists in map
//             if(mp[tr2]==true){
//                 return tr2;                
//             }
//             tr2=tr2->next;
//         }
//         return NULL;
        
        
        // Optimised
        //Intuition
        /*
            We need to find the node with same addr in both lists
            Let 
            x: dist from start of headA to IP
            y: dist from start of headB to IP
            g: length from IP to end.
            l1: x+g
            l2: y+g
            if x==y => tr1 and tr2 will intersect at same time
            but when x!=y dist has to be made same 
            by adding the equivalent dist to each list when any of them finshes traversal
            i.e l1 after complete traversal becomes
                l1: x+g+y  (tr1 goes null=> initialise with headB)
                l2: y+g+x  (tr2 goes null=> initialise with headA)
                this way both dist becomes same and they again intersect at same moment
            This will work in case when lists don't intersect too.
        */
        ListNode* tr1=headA;
        ListNode* tr2=headB;
        if(!tr1||!tr2){
            return NULL;
        }
       
            while(tr1!=tr2){
            
           // move until they meet 
           
            if(!tr1){
                tr1=headB;
            }
            else 
                tr1=tr1->next;
            if(!tr2){
                tr2=headA;
            }
           else 
                tr2=tr2->next;
                
        }
            
        return tr1;
        
    }
};
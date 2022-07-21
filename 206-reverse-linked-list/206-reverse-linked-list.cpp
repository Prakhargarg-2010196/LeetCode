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
    ListNode* reverseList(ListNode* head) {
        // Iterative Approach         
        ListNode*currentNode=head; 
        ListNode*previousNode=NULL;
        while(currentNode!=NULL)
        {   ListNode*nextNode=currentNode->next;
            currentNode->next=previousNode;
            previousNode=currentNode;
            currentNode=nextNode;
        }
            
        return previousNode;
//             Recursive Approach(https://leetcode.com/problems/reverse-linked-list/discuss/2105240/Reverse-Linked-List-oror-Easy-recursive-solution-with-image-explanation)
        // ListNode*currentNode=head;
        // ListNode*previous=NULL;
        // if(currentNode!=NULL)
        // {
        //     reverseList(currentNode->next);
        // }
        // else{
        //     currentNode->next=previousNode;
        //     return previousNode;
        // }
    
    
    
    }
};
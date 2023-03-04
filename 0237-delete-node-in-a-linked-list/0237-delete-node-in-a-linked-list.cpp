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
    
    
    void deleteNode(ListNode* node) {
        // previous node method shall not work here as the previous node 
        // can't be calculated here as head is not given
        // node given is not the tail node so following process is considered
        // 2 step process to delete the node is to be taken here next node will eventually store the node to be deleted. 
        //1. store the next(value) of the node to the given node(value);
        //2.  point the next of the given the next of the next node;
        //3. delete the next node;
        ListNode* nextNode=node->next;
        node->val=nextNode->val;
        node->next=nextNode->next;
        delete nextNode;
    }
};
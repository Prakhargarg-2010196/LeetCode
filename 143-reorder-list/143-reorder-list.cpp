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
//     Return the middle node.
    ListNode* middleNode(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        return slow;
    }
//     Return the reversed linked list
    ListNode* reversedList(ListNode* head){
        ListNode* previousNode=NULL;
        ListNode* currentNode=head;
        if(head==NULL)
            return head;
        while(currentNode!=NULL){
            ListNode* nextNode=currentNode->next;
            currentNode->next=previousNode;
            previousNode=currentNode;
            currentNode=nextNode;
        }
        return previousNode;
    }
    // Function to print the list if required
    // void printList(ListNode* head){
    //     ListNode* temp=head;
    //     while(temp!=NULL)
    //     {   cout<<temp->val<<" ";
    //         temp=temp->next;
    //     }
    //     cout<<endl;
    // }
    void reorderList(ListNode* head) {
        
//         To store pointer to the first Half head
        ListNode* firstHalfHead=head;
//         To store pointer to the middle node
        ListNode* middle=middleNode(head);
//         To store pointer to the second Half head
        ListNode* secondHalfHead=reversedList(middle->next);
       
        while(firstHalfHead!=NULL&&secondHalfHead!=NULL){
//            Store the link to the first half head next node 
            ListNode* newFirstHalfHead=firstHalfHead->next;
//            Store the link to the second half head next node
            ListNode* newSecondHalfHead=secondHalfHead->next;
//             Connect the second half head to the first half head;
            firstHalfHead->next=secondHalfHead;
//             Connect the  first half next to next node to the new first half head so as to complete the alternativity
            firstHalfHead->next->next=newFirstHalfHead;
//             Move the original first half head pointer forward
            firstHalfHead=newFirstHalfHead;
//             Move the original second half head pointer forward
            secondHalfHead=newSecondHalfHead;
                      
            
        }
//   To make the last node next null pointer 
        middle->next=NULL;
        
        
    }
};
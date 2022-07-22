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
    ListNode* reverse(ListNode* reversedHead){
        ListNode* current=reversedHead;
        ListNode* previous=NULL;
        while(current!=NULL)
        {   ListNode* temp=current->next;
            current->next=previous;
            previous=current;
            current=temp;
        }
        return previous;
    }
    
    bool isPalindrome(ListNode* head) {
        vector<int>nonReversed;
        ListNode* currentHead=head;
        while(currentHead!=NULL)
        {    nonReversed.push_back(currentHead->val);
             currentHead=currentHead->next;   
        }
        
        ListNode* reversedHead=reverse(head);
        int i=0;
        while(reversedHead!=NULL)
        {   
            if(reversedHead->val!=nonReversed.at(i))
            {  
                return false;
            }
            i++;            
            reversedHead=reversedHead->next;
        }
        return true;
    }
       
};
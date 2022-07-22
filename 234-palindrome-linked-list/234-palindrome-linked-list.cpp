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
    ListNode* findReverse(ListNode* originalHead){
        ListNode* current=originalHead;
        ListNode* previous=NULL;
        while(current!=NULL)
        {   ListNode* temp=current->next;
            current->next=previous;
            previous=current;
            current=temp;
        }
        return previous;
    }
    
    ListNode* findMiddleNode(ListNode* originalHead)
    {   ListNode* slow=originalHead,*fast=originalHead;
        while(fast&&fast->next&&fast->next->next)
        {
            slow=slow->next,
            fast=fast->next->next;
        }
        return slow;
    }
    bool CompareLinkedLists(ListNode* ListOneHead,ListNode* ListTwoHead)
    {
        while(ListOneHead!=NULL&&ListTwoHead!=NULL)
        {
            if(ListOneHead->val!=ListTwoHead->val)
                return false;
            else{ ListOneHead=ListOneHead->next;
                 ListTwoHead=ListTwoHead->next;
                }
        }
        return true;
    }
    
    
    
    
    bool isPalindrome(ListNode* head) {
        // vector<int>nonReversed;
        // ListNode* currentHead=head;
        // while(currentHead!=NULL)
        // {    nonReversed.push_back(currentHead->val);
        //      currentHead=currentHead->next;   
        // }
        // ListNode* reversedHead=reverse(head);
        // int i=0;
        // while(reversedHead!=NULL)
        // {   
        //     if(reversedHead->val!=nonReversed.at(i))
        //         return false;
        //     i++;            
        //     reversedHead=reversedHead->next;
        // }
        // return true;
        if(head==NULL || head->next==NULL) return true;
        ListNode* originalHead=head;
        ListNode* middleNode=findMiddleNode(originalHead);
        ListNode* reversedHead=findReverse(middleNode);
        return CompareLinkedLists(head,reversedHead);
    }
       
};
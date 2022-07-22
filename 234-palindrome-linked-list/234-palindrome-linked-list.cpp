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
        vector<int>copy;
        ListNode* currentHead=head;
        while(head!=NULL)
        {    copy.push_back(head->val);
             head=head->next;   
        }
        // for(auto it:copy)
        // {   cout<<it<<" ";   
        // }cout<<endl;
        ListNode* notReversedHead=currentHead;
        ListNode* reversedHead=reverse(notReversedHead);
        
//         cout<<"reversed"<<endl;
//         while(reversedHead!=NULL)
//         {    cout<<reversedHead->val<<" ";
//              reversedHead=reversedHead->next;
//          }cout<<endl;
        
        int i=0;
        while(reversedHead!=NULL)
        {   
            if(reversedHead->val!=copy.at(i))
            {  
                return false;
            }
            i++;            
            reversedHead=reversedHead->next;
        }
        return true;
    }
};
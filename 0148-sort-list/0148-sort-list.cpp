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
    ListNode* sortList(ListNode* head) {
        // Brute Force
         ListNode* newList=new ListNode(-1,head);
         ListNode* temp=head;
         vector<int>storeList;
        while(temp){
            storeList.push_back(temp->val);
            temp=temp->next;
        }
        // to debug the list
        for(auto&it:storeList){
            cout<<it<<" ";
        }
        sort(storeList.begin(),storeList.end());
        temp=newList;
        for(auto&it:storeList){
           // create a new node and attach it to the previous node 
            ListNode* newNode=new ListNode(it,NULL);
            temp->next=newNode;// connect to the previous node;
            temp=temp->next;// move the pointer to the next node for new node attachment
        }
        return newList->next;
        
    }
};
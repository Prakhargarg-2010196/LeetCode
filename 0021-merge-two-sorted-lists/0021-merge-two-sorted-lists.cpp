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
    ListNode * mergeTwoLists(ListNode * list1, ListNode * list2) {
    // edge cases 
    // if either of the linked list is empty
    if (list1==NULL) {
      return list2;
    } 
    if (list2==NULL) {
      return list1;
    } 
     if (list1 -> val > list2 -> val) {
        swap(list1, list2);
      }
      // to store the previous head of the linked list1 
      ListNode* previousHead = list1;      
      while (list1!=NULL && list2!=NULL) {
        ListNode * prev = NULL;
        while(list1!=NULL && list1->val<=list2->val) {
          // when the list1 is either empty or the value is less than list2
          // no connections made b/w list1 and list2 and no swapping is done
          prev = list1; // req for getting the value for making connections in future.
          list1 = list1 -> next;
        }
        // when the list1 value is greater than list2
        // join the prev node to the next node and then swap the nodes as only 
        // connections should be made to by comparision of list1.
        prev -> next = list2;
        swap(list1, list2);
    }
    return previousHead;
  }
};
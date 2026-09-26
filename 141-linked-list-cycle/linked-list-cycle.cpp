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
    bool hasCycle(ListNode* head) {
        if(head==NULL)return 0;
       ListNode* slow = head;
      ListNode* high = head->next;
       while(high!=NULL){
        slow = slow->next;
         high = high->next;
         if(high!=NULL){
            high = high->next;
         }
         if(slow == high){
            return 1;
        }
       }
       return false;
       
    }
};
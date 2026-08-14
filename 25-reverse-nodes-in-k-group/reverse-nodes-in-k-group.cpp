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
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
         int c = k;
          while (curr != NULL && c > 0) {
            curr = curr->next;
            c--;
        }
         if (c > 0) {
            return head;
        }
        curr = head;
        c = k;

        while (curr != NULL && c > 0) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            c--;
        }
        head->next = reverseKGroup(curr, k);
         return prev;
    }
};
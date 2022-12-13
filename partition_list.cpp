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
    ListNode* partition(ListNode* head, int x) {
        ListNode* result = new ListNode(-101);
        ListNode *aux = result;
        for (ListNode *r = head; r != NULL; r = r->next) {
            if (r -> val < x) {
                aux -> next = new ListNode(r -> val);
                aux = aux -> next;
            }
        }

        for (ListNode *r = head; r != NULL; r = r->next) {
            if (r -> val >= x) {
                aux -> next = new ListNode(r -> val);
                aux = aux -> next;
            }
        }

        return result->next;
    }
};

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
    ListNode* swapPairs(ListNode* head) {
        ListNode* x = head;
        ListNode* y = (head != NULL) ? head->next : NULL;
        while (y != NULL) {
            int aux = x->val;
            x->val = y->val;
            y->val = aux;

            x = y->next;
            y = (x != NULL) ? x->next: NULL;
        }
        return head;      
    }
};

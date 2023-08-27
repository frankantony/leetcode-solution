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
    int gcd (int x, int y) {
        if (y == 0)
            return x;
        return gcd (y, x % y);
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* previous = head;
        ListNode* current = head->next;
        while (current != NULL) {
            int m = gcd (previous->val, current->val);
            ListNode* n = new ListNode(m);
            previous->next = n;
            n->next = current;
            previous = current;
            current = current->next;
        }
        return head;
    }
};

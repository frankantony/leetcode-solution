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
    int length (ListNode* root) {
        ListNode* current = root;
        int r = 0;
        while (current) {
            r++;
            current = current->next;
        }
        return r;
    }

    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* current = head;
        ListNode* x;
        ListNode* y;
        int len = length(head), cont = 1;
        while (current) {
            if (cont == k)
                x = current;
            if (cont == len - k + 1)
                y = current;

            cont++;
            current = current->next;
        }

        int aux = x->val;
        x->val = y->val;
        y->val = aux;

        return head;
    }
};

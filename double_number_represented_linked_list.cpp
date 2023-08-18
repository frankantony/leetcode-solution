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
    ListNode* reverse (ListNode* head) {
        if (head == NULL || head -> next == NULL)
            return head;
        ListNode* r = reverse (head->next);
        head->next->next = head;
        head->next = NULL;
        return r;
    }

    ListNode* doubleIt(ListNode* head) {
        ListNode* reversed = reverse(head);
        ListNode* current = new ListNode(-1);
        ListNode* result = current;
        int rest = 0;
        while (reversed != NULL) {
            int product = 2 * (reversed->val);
            current->next = new ListNode(product % 10 + rest);
            rest = product / 10;
            current = current->next;
            reversed = reversed -> next;
        }
        if (rest != 0)
            current->next = new ListNode(rest);
        
        return reverse(result->next);
    }
};

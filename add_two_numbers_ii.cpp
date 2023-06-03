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
    ListNode* reverseList(ListNode* head) {
        ListNode* previous = NULL;
        ListNode* current = head;
        ListNode* next = head;
        while (current != NULL) {
            next = current -> next;
            current -> next = previous;
            previous = current;
            current = next;
        }
        return previous;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a = l1;
        ListNode* b = l2;
        ListNode* result = new ListNode(-1);
        ListNode* aux = result;
        a = reverseList (a);
        b = reverseList (b);
        int rest = 0;
        while (a != NULL || b != NULL) {
            int x = (a != NULL) ? a->val: 0;
            int y = (b != NULL) ? b->val: 0;
            int sum = x + y + rest;
            aux->next = new ListNode(sum % 10);
            aux = aux->next;
            rest = sum / 10;
            a = (a != NULL)? a->next: NULL;
            b = (b != NULL) ? b->next: NULL;
        }
        if (rest != 0)
            aux->next = new ListNode(rest);
        return reverseList(result->next);
    }
};

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

    ListNode* removeNodes(ListNode* head) {
        ListNode* current = reverseList(head);

        int maximum = 0;
        ListNode* result = new ListNode(-1);
        ListNode* aux = result;
        while (current != NULL) {
            int value = current->val;
            if (value >= maximum) {
                ListNode* newNode = new ListNode(value);
                aux->next = newNode;
                aux = aux->next;
            }
            maximum = max (maximum, value);
            current = current->next;
        }
        
        return reverseList(result->next);
    }
};

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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *result = new ListNode(INT_MIN);
        result->next = head;

        ListNode* previous = head;
        ListNode* current = head->next;
        while (current != NULL) {
            ListNode* tmp = result;
            ListNode* candidate = result;
            if (current->val < previous->val) {
                
                while (tmp != current && tmp->val <= current->val) {
                    candidate = tmp;
                    tmp = tmp->next;
                }

                previous->next = current->next;
                current->next = candidate->next;
                candidate->next = current;
                current = previous->next;
            }
            else {
                current = current->next;
                previous = previous->next;
            }
        }

        return result->next;
    }
};

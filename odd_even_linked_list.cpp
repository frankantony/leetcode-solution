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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddHead = new ListNode(-1);
        ListNode* evenHead = new ListNode(-1);
        ListNode* oddEnd = oddHead;
        ListNode* evenEnd = evenHead;
        ListNode* current = head;
        bool odd = true;
        while (current != NULL) {
            if (odd) {
                oddEnd->next = current;
                oddEnd = oddEnd->next;
                odd = false;
            }
            else {
                evenEnd->next = current;
                evenEnd = evenEnd->next;
                odd = true;
            }
            current = current->next;
        }
        oddEnd->next = evenHead->next;
        evenEnd->next = NULL;
        return oddHead->next;
    }
};

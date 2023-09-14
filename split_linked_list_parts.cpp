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
    int length (ListNode* head) {
        ListNode* current = head;
        int len = 0;
        while (current != NULL) {
            len++;
            current = current->next;
        }
        return len;
    }

    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = length (head);
        int div = len / k, rest = len % k;
        vector<ListNode*> result;
        ListNode* current = head;
        for (int i = 1; i <= k; i++) {
            ListNode* first = current;
            int j = 1, max = (i <= rest) + div;
            while (j < max && current != NULL) {
                current = current->next;
                j++;
            }
            if (current != NULL) {
                ListNode* aux = current;
                current = current->next;
                aux->next = NULL;
            }
            result.push_back(first);
        }
        return result;
    }
};

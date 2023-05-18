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
    int pairSum(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        stack<int> stack;
        while (slow != NULL) {
            stack.push(slow->val);
            slow = slow->next;
        }
        int result = 0;
        ListNode* current = head;
        while (!stack.empty()) {
            int value = stack.top();
            stack.pop();
            result = max (result, value + current->val);
            current = current->next;
        }

        return result;
    }
};

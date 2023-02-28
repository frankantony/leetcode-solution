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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head -> next;
        stack<int> stack;

        while (fast != NULL && fast->next != NULL) {
            stack.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }

        if (fast != NULL)
            stack.push(slow->val);
        slow = slow->next;

        while (slow != NULL) {
            int value = stack.top();
            stack.pop();
            if (value != slow->val)
                return false;
            slow = slow -> next;
        }

        return true;
    }
};

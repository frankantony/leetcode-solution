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
    ListNode* deleteNodes (ListNode* head, map<int, bool> table) {
        ListNode* x = new ListNode(-1);
        x->next = head;
        ListNode* previous = x, *current = head;
        while (current != NULL) {
            if (table[current->val])
                previous->next = current->next;
            else
                previous = current;
            current = current->next;
        }

        return x->next;
    }

    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int, bool> table;
        int len = nums.size();
        for (int i = 0; i < len; i++)
            table[nums[i]] = true;
        return deleteNodes(head, table);
    }
};

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* newNode = new ListNode(-101);
        newNode->next = head;
        ListNode* previous = newNode;
        ListNode* current = head;
        
        while (current != NULL) {
            if (previous -> val == current -> val)
                previous -> next = current -> next;
            else
                previous = current;
            
            current = current->next;
        }
        return newNode->next;
    }
};

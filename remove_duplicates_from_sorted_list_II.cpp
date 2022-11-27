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
        
        ListNode* lastDifferent = newNode;
        while (current != NULL) {
            if (previous -> val == current -> val) {
                while (current != NULL && previous -> val == current -> val)
                    current = current -> next;
                
                lastDifferent -> next = current;
            }
            else
                lastDifferent = previous;
                
            previous = current;
            current = (current) ? current->next: NULL;
        }
        return newNode->next;
    }
};

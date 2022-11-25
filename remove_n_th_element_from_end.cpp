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
    
    int len (ListNode *node) {
        int result = 0;
        while (node != NULL) {
            node = node->next;
            result++;
        }
        return result;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k = len(head) - n + 1;
        ListNode* newNode = new ListNode(-1);
        newNode -> next = head;
        
        ListNode* previous = newNode;
        ListNode* current = head;
        
        int count = 1;
        while (current != NULL) {
            if (count == k) {
                previous->next = current -> next;
                break;
            }
            
            count++;
            previous = current;
            current = current -> next;
        }
        
        return newNode->next;
    }
};

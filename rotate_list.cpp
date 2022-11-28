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
    
    int size(ListNode* head) {
        ListNode* node = head;
        int result = 0;
        while (node != NULL) {
            result++;
            node = node->next;
        }
        return result;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        int len = size (head), cont = 1;
        if (len == 0 || k == 0) return head;
        
        k = len - (k % len);
        
        ListNode* current = head;
        ListNode* aux;
        ListNode* previous;
        
        while (current != NULL) {
            if (cont == k)
                aux = current;
            
            cont++;
            previous = current;
            current = current -> next;
        }
        
        ListNode* result = (aux->next) ? aux->next: head;
        previous->next = head;
        aux->next = NULL;
        
        return result;
        
    }
};

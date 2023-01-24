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
    void reorderList(ListNode* head) {
       int len = 0;
       ListNode* current = head;
       vector<ListNode*> vet;
       while (current != NULL) {
            vet.push_back(current);
            current = current -> next;
            len++;
       }

       int left = 0, right = len - 1;
       while (left < right) {
           vet[left++]->next = vet[right];
           vet[right--]->next = vet[left];
       }
       vet[left]->next = NULL;
    }
};

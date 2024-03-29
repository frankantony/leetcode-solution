/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       ListNode* p = head; 
       ListNode* q = head;
       int pos = 0;
       while (p != NULL && q != NULL && q->next != NULL) {
           p = p->next;
           q = q->next->next;
           if (p == q)
                return true;
       }
       return false;
    }
};

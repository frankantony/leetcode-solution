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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool visit[100001];
    TreeNode* convert (int i, int j, vector<int>& v) {
        int mid = (i + j) / 2;
        if (i > j || visit[mid])
            return NULL;
        visit[mid] = true;
        TreeNode* root = new TreeNode(v[mid]);
        root->left = convert(i, mid-1, v);
        root->right = convert(mid+1, j, v);

        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* aux = head;
        vector<int> v;
        while (aux != NULL) {
            v.push_back(aux->val);
            aux = aux->next;
        }

        int len = v.size();
        TreeNode* result = convert(0, len-1, v);
        return result;
    }
};

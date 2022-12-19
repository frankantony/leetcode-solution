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
    void preorder (vector<int>& vet, TreeNode* root) {
        if (root == NULL) return;
        preorder(vet, root->left);
        vet.push_back(root->val);
        preorder(vet, root->right);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int> vet;
        preorder(vet, root);
        int i = 0, j = vet.size() - 1, current_sum;
        while (i < j) {
            current_sum = vet[i] + vet[j];
            if (current_sum == k)
                return true;
            else if (current_sum < k)
                i++;
            else
                j--;
        }
        return false;
    }
};

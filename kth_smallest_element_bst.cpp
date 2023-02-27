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
    void solve (TreeNode* root, vector<int>& vet) {
        if (root != NULL) {
            solve (root->left, vet);
            vet.push_back(root->val);
            solve (root->right, vet);
        }
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> vet;
        solve (root, vet);
        return vet[k-1];
    }
};

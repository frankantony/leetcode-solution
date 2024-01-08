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
    void solve (TreeNode* root, int low, int high, int& result) {
        if (root == NULL) return;
        int value = root->val;
        solve(root->left, low, high, result);
        if (value >= low && value <= high)
            result += value;
        solve(root->right, low, high, result);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int result = 0;
        solve(root, low, high, result);
        return result;
    }
};

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
    int height (TreeNode* root) {
        if (root == NULL) return 0;
        return 1 + max(height(root->left), height(root->right));
    }

    void solve (vector<vector<int>>& result, TreeNode* root, int i) {
        if (root == NULL) return;
        result[i].push_back(root->val);
        solve (result, root->left, i + 1);
        solve (result, root->right, i + 1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        int h = height(root);
        vector<vector<int> > result (h, vector<int>());
        solve (result, root, 0);
        return result;
    }
};

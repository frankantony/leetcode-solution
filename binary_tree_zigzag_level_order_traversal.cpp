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
    void solve (TreeNode* root, int i, vector<vector<int>>& result) {
        if (root == NULL) return;
        result[i].push_back(root->val);
        solve(root->left, i + 1, result);
        solve(root->right, i + 1, result);
    }

    int height (TreeNode* root) {
        if (root == NULL)
            return 0;
        int h_left = height(root->left) + 1;
        int h_right = height(root->right) + 1;
        return max(h_left, h_right);
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int h = height(root);
        vector<vector<int> > result (h, vector<int>());
        solve (root, 0, result);

        for (int i = 0; i < h; i++) {
            if (i % 2 == 0)
                continue;
            int len = result[i].size();
            for (int j = 0; j < len / 2; j++)
                swap(result[i][j], result[i][len-j-1]);
        }

        return result;
    }
};

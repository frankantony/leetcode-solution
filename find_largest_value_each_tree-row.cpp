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
    void solve (TreeNode * root, int i, vector<int>& maximum) {
        if (root == NULL) return;
        if (root->val > maximum[i])
            maximum[i] = root->val;
        
        solve (root->left, i + 1, maximum);
        solve (root->right, i + 1, maximum);
    }

    int height (TreeNode* root) {
        if (root == NULL)
            return 0;
        int h_left = height(root->left) + 1;
        int h_right = height(root->right) + 1;
        return max(h_left, h_right);
    }

    vector<int> largestValues(TreeNode* root) {
        int h = height (root);
        vector<int> maximum(h, INT_MIN);
        solve (root, 0, maximum);
        return maximum;
    }
};

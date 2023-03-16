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
    int maxLevel = 0;
    bool solve (TreeNode* root, int level, int h) {
        if (root == NULL)
             return level >= maxLevel;

        level++;
        if (level < h-1) {
            if (root->left == NULL || root->right == NULL)
                return false;
        }

        maxLevel = max (level, maxLevel);
        return solve (root->right, level, h) && solve (root->left, level, h);
    }

    int height (TreeNode* root) {
        if (root == NULL)
            return 0;
        int h_left = height(root->left) + 1;
        int h_right = height(root->right) + 1;
        return max(h_left, h_right);
    }

    bool isCompleteTree(TreeNode* root) {

        int h = height(root);
        bool result = solve (root, 0, h);
        return result;
    }
};

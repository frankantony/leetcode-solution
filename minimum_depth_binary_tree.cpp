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
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        else if (root -> right == NULL && root -> left == NULL)
            return 1;
        
        int left = 1 + minDepth(root->left);
        int right = 1 + minDepth(root->right);
        if (root->left != NULL && root->right != NULL)
            return min (left, right);
        else if (root->left != NULL)
            return left;
        return right;
    }
};

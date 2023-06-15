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
    void solve (TreeNode* root, int & result) {
        if (root == NULL) return;
        if (root->left != NULL)
            result = min (result, abs (root->val - root->left->val));
        if (root->right != NULL)
            result = min (result, abs (root->val-root->right->val));
        TreeNode* leftRight = root->left;
        TreeNode* rightLeft = root->right;
        while (leftRight != NULL && leftRight->right != NULL)
            leftRight = leftRight->right;
        while (rightLeft != NULL && rightLeft->left != NULL)
            rightLeft = rightLeft->left;
        if (leftRight != NULL)
            result = min (result, abs (leftRight->val - root->val));
        if (rightLeft != NULL)
            result = min (result, abs (rightLeft->val - root->val));
        solve (root->left, result);
        solve (root->right, result);
    }

    int getMinimumDifference(TreeNode* root) {
        int result = INT_MAX;
        solve (root, result);
        return result;
    }
};

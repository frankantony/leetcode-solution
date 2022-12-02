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
    
    int sumNumbers(TreeNode* root, int answer) {
        if (root == NULL) return 0;
        answer = answer * 10 + root->val;
        if (root->left == NULL && root->right == NULL)
            return answer;
        return sumNumbers(root->left, answer) + sumNumbers(root->right, answer);
    }
    
    int sumNumbers(TreeNode* root) {
        int result = sumNumbers(root, 0);
        return result;
    }
};

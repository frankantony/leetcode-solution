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
    void search (vector<string>& result, string current, TreeNode* root) {
        if (root == NULL)
            return;
        if (current.size() > 0)
            current += "->";
        current += to_string(root->val);
        if (root->left == NULL && root->right == NULL) {
            result.push_back(current);
            current = "";
        }
        else {
            search (result, current, root->left);
            search (result, current, root->right);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        search(result, "", root);
        return result;
    }
};

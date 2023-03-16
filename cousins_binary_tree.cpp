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
    
    void solve (TreeNode* root, int x, int y, int i, 
                int& a, int &b, bool& sameParent) {
        if (root == NULL) return;
        if (x == root->val)
            a = i;
        if (y == root->val)
            b = i;
        
        if (root->left != NULL && root->right != NULL) {
            int g = root->left->val, h = root->right->val;
            if ((g == x && h == y) ||(g == y) && (h == x))
                sameParent = true;
        }

        solve (root->left, x, y, i+1, a, b, sameParent);
        solve (root->right, x, y, i+1, a, b, sameParent);
    }

    bool isCousins(TreeNode* root, int x, int y) {
        int a = 0, b = 0;
        bool sameParent = false;
        solve (root, x, y, 0, a, b, sameParent);
        return a == b && !sameParent;
    }
};

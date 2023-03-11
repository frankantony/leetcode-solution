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
    void solve (vector<int>& result, TreeNode* root, int i) {
        if (root == NULL)
            return;
        if (result.size() == i)
            result.push_back(0);
        result[i] += root->val;
        solve (result, root->left, i + 1);
        solve (result, root->right, i + 1);
    }

    int maxLevelSum(TreeNode* root) {
        vector<int> result;
        solve (result, root, 0);
        int len = result.size();
        int max = 0;
        for (int i = 1; i < len; i++)
            if (result[i] > result[max])
                max = i;

        return max + 1;
    }
};

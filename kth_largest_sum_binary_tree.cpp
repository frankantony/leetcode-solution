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
    static bool cmp (long long x, long long y) {
        return x > y;
    }

    void solve (vector<long long>& result, TreeNode* root, int i) {
        if (root == NULL)
            return;
        if (result.size() == i)
            result.push_back(0);
        result[i] += root->val;
        solve (result, root->left, i + 1);
        solve (result, root->right, i + 1);
    }

    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> result;
        solve (result, root, 0);
        sort(result.begin(), result.end(), cmp);
        int len = result.size();
        if (len < k)
            return -1;
        return result[k - 1];
    }
};

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
    bool visit[10001];
    TreeNode* solve (int i, int j, vector<int>& nums) {
        int mid = (i + j) / 2;
        if (i > j || visit[mid])
            return NULL;
        visit[mid] = true;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = solve(i, mid-1, nums);
        root->right = solve(mid+1, j, nums);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int len = nums.size();
        TreeNode* result = solve (0, len-1, nums);
        return result;
    }
};

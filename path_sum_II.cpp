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
    
    void pathSum (TreeNode* root, int targetSum, int current, vector<vector<int> >& result, vector<int>& vet) {
        if (root != NULL) {
            vet.push_back(root->val);
            current += root->val;
            if (root->left == NULL && root->right == NULL) {
                if (current == targetSum) {
                 result.push_back(vet);
                }
            }
            else {
                pathSum(root->left, targetSum, current, result, vet);
                pathSum(root->right, targetSum, current, result, vet);
            }
            vet.pop_back();
        }
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int> > result;
        vector<int> vet;
        pathSum (root, targetSum, 0, result, vet);
        return result;
    }
};

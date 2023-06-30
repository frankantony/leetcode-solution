/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void solve (vector<int>& result, Node* root) {
        if (root == NULL) return;
        vector<Node*> children = root->children;
        for (int i = 0; i < children.size(); i++) {
            result.push_back(children[i]->val);
            solve (result, children[i]);
        }
    }

    vector<int> preorder(Node* root) {
        vector<int> result;
        if (root != NULL)
            result.push_back(root->val);
        solve (result, root);
        return result;
    }
};

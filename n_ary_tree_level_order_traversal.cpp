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
    void solve (vector<vector<int> >& result, Node* root, int index) {
        if (root == NULL) return;
        vector<Node*> children = root->children;
        for (int i = 0; i < children.size(); i++) {
            result[index].push_back(children[i]->val);
            solve (result, children[i], index + 1);
        }
    }

    int height (Node* root) {
        if (root == NULL) return 0;
        vector<Node*> children = root->children;
        int h = 0;
        for (int i = 0; i < children.size(); i++)
            h = max (h, height(children[i]) + 1);
        return h;
    }

    vector<vector<int>> levelOrder(Node* root) {
        if (root == NULL)
            return {};
        int h = height (root);
        vector<vector<int> > result(h + 1, vector<int>());
        result[0].push_back(root->val);
        solve (result, root, 1);
        return result;
    }
};

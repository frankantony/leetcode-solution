class Solution {
public:
    int countNodesVisited (int root, vector<int>& leftChild, vector<int>& rightChild) {
        if (root == -1)
            return 0;
        return 1 + countNodesVisited (leftChild[root], leftChild, rightChild)
                + countNodesVisited (rightChild[root], leftChild, rightChild);
    }

    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> degreeIn (n, 0);
        for (int i = 0; i < n; i++) {
            if (leftChild[i] != -1) {
                if (degreeIn[leftChild[i]] == 1)
                    return false;
                degreeIn[leftChild[i]]++;
            }

            if (rightChild[i] != -1)  {
                if (degreeIn[rightChild[i]] == 1)
                    return false;
                degreeIn[rightChild[i]]++;
            }
        }
        
        int root = -1;
        for (int i = 0; i < n; i++) {
            if (degreeIn[i] == 0) {
                if (root == -1)
                    root = i;
                else
                    return false;
            }
        }

        return countNodesVisited (root, leftChild, rightChild) == n;
    }
};

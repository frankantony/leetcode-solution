class Solution {
public:
    void dfs (int i, int n, vector<vector<int>>& isConnected, 
             vector<bool>& visited) {
        if (visited[i])
            return;
        visited[i] = true;
        for (int j = 0; j < n; j++)
            if (isConnected[i][j] == 1)
                dfs (j, n, isConnected, visited);
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size(), result = 0;
        vector <bool> visited(n, false);
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                result++;
                dfs (i, n, isConnected, visited);
            }
        }
        return result;  
    }
};

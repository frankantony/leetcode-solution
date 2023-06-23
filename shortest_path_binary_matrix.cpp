class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int len = grid.size();
        if (grid[0][0] == 1 || grid[len-1][len-1] == 1)
            return -1;
        
        queue<vector<int>> q;
        vector<int> dx {-1, 0, 1};
        vector<int> dy {-1, 0, 1};
        q.push({0, 0});
        grid[0][0] = 1;
        while (!q.empty()) {
            vector <int> current = q.front();
            q.pop();
            int x = current[0];
            int y = current[1];
            if (x == len - 1 && y == len - 1)
                return grid[x][y];
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int adjx = x + dx[i];
                    int adjy = y + dx[j];
                    if (adjx >= 0 && adjx < len && adjy >= 0 && adjy < len && grid[adjx][adjy] == 0) {
                        q.push({adjx, adjy});
                        grid[adjx][adjy] = grid[x][y] + 1;
                    }
                }
            }
        }
        return -1;
    }
};

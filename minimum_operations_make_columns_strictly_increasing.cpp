class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), result = 0;
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m - 1; i++) {
                if (grid[i][j] >= grid[i+1][j]) {
                    result += (grid[i][j] - grid[i+1][j] + 1);
                    grid[i+1][j] = grid[i][j] + 1;
                }
            }
        }
        return result;
    }
};

class Solution {
public:
    int dfs (vector<vector<int>>& grid, int i, int j, int m, int n) {
        if (i < 0 || i == m || j < 0 || j == n || grid[i][j] == 0)
            return 0;
        int fish = grid[i][j];
        grid[i][j] = 0;
        int down = dfs (grid, i + 1, j, m, n);
        int up = dfs (grid, i - 1, j, m, n);
        int left = dfs (grid, i, j - 1, m, n);
        int right = dfs (grid, i, j + 1, m, n);
        return fish + down + up + left + right;
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), result = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result = max (result, dfs (grid, i, j, m, n));
            }
        }
        return result;
    }
};

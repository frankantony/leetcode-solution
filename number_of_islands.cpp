class Solution {
public:
    bool dfs (vector<vector<char>>& grid, int i, int j, int m, int n) {
        if (i < 0 || i == m || j < 0 || j == n || grid[i][j] == '0')
            return true;
        grid[i][j] = '0';
        bool down = dfs (grid, i + 1, j, m, n);
        bool up = dfs (grid, i - 1, j, m, n);
        bool left = dfs (grid, i, j - 1, m, n);
        bool right = dfs (grid, i, j + 1, m, n);
        return down && up && left && right;
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size(), result = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == '1' && dfs (grid, i, j, m, n))
                    result++;

        return result;
    }
};

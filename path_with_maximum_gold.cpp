class Solution {
public:
    int solve (vector<vector<int>>& grid, vector<vector<bool>>& visit, int i, int j) {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0
        || visit[i][j])
            return 0;
        visit[i][j] = true;
        int left = solve (grid, visit, i, j - 1) + grid[i][j];
        int right = solve (grid, visit, i, j + 1) + grid[i][j];
        int up = solve (grid, visit, i - 1, j)  + grid[i][j];
        int down = solve (grid, visit, i + 1, j)  + grid[i][j];
        int result = max (left, right);
        result = max (result, up);
        result = max (result, down);
        visit[i][j] = false;
        return result;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int result = 0;        
        vector<vector<bool> > visit (grid.size(), vector<bool>(grid[0].size(), false));
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                int value = solve (grid,visit, i, j);
                result = max (result, value);
            }
        }
        return result;
    }
};

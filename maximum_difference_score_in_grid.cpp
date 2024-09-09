class Solution {
public:
    int maxScore(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), result = INT_MIN;
        vector<vector<int> > dp (m, vector<int>(n, 0));
        for (int i = m-1; i >= 0; i--) {
            for (int j = n-1; j >= 0; j--) {
                int maxi = INT_MIN;
                if (i + 1 < m)
                    maxi = max (maxi, dp[i+1][j]);
                if (j + 1 < n)
                    maxi = max (maxi, dp[i][j+1]);
                if (maxi == INT_MIN)
                    dp[i][j] = grid[i][j];
                else {
                    result = max (result, maxi - grid[i][j]);
                    dp[i][j] = max (maxi, grid[i][j]);
                }
            }
        }
        return result;
    }
};

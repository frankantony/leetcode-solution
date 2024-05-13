class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                char v = grid[i][j];
                if (i + 1 < m && j + 1 < n)
                    if ((v != grid[i][j+1]) + (v != grid[i+1][j]) + (v != grid[i+1][j+1]) <= 1) {
                        return true;
                    }

                if (i - 1 >= 0 && j - 1 >= 0)
                    if ((v != grid[i][j-1]) + (v != grid[i-1][j]) + (v != grid[i-1][j-1]) <= 1) {
                        return true;
                    }
            }
        }

        return false;
    }
};

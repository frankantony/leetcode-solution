class Solution {
public:
    bool verify (vector<vector<int>>& grid, int & i, int & j) {
        int n = grid.size();
        for (int k = 0; k < n; k++) 
            if (grid[i][k] != grid[k][j])
                return false;
        return true;
    }

    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int result = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (verify(grid, i, j))
                    result++;
        return result;
    }
};

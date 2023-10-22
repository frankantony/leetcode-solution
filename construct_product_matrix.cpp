class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> prefix (n, vector<int>(m));
        long long product = 1;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                prefix[i][j] = product;
                product *= grid[i][j];
                product %= 12345;
            }
        }

        product = 1;
        vector<vector<int>> suffix (n, vector<int>(m));
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                suffix[i][j] = product;
                product *= grid[i][j];
                product %= 12345;
            }
        }

        vector<vector<int>> result (n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                result[i][j] = (prefix[i][j] * suffix[i][j]) % 12345;

        return result;
    }
};

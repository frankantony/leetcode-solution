class Solution {
public:
    int countDistinct (int flag,int c, int l, vector<vector<int>>& grid) {
        int i = c + flag, j = l + flag;
        int m = grid.size(), n = grid[0].size();
        map<int, bool> contain;
        while (true) {
            if (i < 0 || j < 0 || i == m || j == n)
                break;
            contain[grid[i][j]] = true;
            i += flag;
            j += flag;
        }
        return contain.size();
    }

    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> answer (m, vector<int> (n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int bottomRight = countDistinct (1, i, j, grid);
                int topLeft = countDistinct (-1, i, j, grid);
                answer[i][j] = abs (bottomRight - topLeft);
            }
        }
        return answer;
    }
};

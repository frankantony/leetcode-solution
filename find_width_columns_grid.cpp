class Solution {
public:
    int countDigits (int value) {
        int result = 0;
        if (value <= 0) {
            value = -value;
            result++;
        }
        while (value != 0) {
            result++;
            value /= 10;
        }
        return result;
    }

    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> result;
        for (int i = 0; i < n; i++) {
            int maximum = 0;
            for (int j = 0; j < m; j++) 
                maximum = max (maximum, countDigits (grid[j][i]));
            result.push_back(maximum);
        }
        return result;
    }
};

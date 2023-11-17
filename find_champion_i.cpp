class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid[0].size();
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++)
                count += grid[j][i];
            if (count == 0)
                return i;
        }
        return 0;
    }
};

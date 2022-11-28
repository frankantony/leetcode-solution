class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map <int, bool> line, column;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    line[i] = true;
                    column[j] = true;
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (line[i] || column[j])
                    matrix[i][j] = 0;
            }
        }
    }
};

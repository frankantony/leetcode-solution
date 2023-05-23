class Solution {
public:
    bool verify (int line, int column, vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        for (int i = 0; i < m; i++)
            if (i != line && mat[i][column] == 1)
                return false;
        for (int i = 0; i < n; i++)
            if (i != column && mat[line][i] == 1)
                return false;
        return true;
    }

    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(), result = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (mat[i][j] == 1 && verify(i, j, mat))
                    result++;
        return result;
    }
};

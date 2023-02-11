class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n, 0));
        int cont = 1, i = 0, j = 0;
        bool left = false, right = true, up = false, down = false;
        while (cont <= n*n) {
            if (right) {
                result[i][j++] = cont++;
                if (j == n - 1 || (j < n - 1 && result[i][j + 1] != 0)) {
                    down = true;
                    right = false;
                }
            }
            else if (down) {
                result[i++][j] = cont++;
                if (i == n - 1 || (i < n-1 && result[i + 1][j] != 0)) {
                    left = true;
                    down = false;
                }
            }
            else if (left) {
                result[i][j--] = cont++;
                if (j == 0 || (j >= 1 && result[i][j - 1] != 0)) {
                    left = false;
                    up = true;
                }
            }
            else {
                result[i--][j] = cont++;
                if (i == 0 || (i >= 1 && result[i - 1][j] != 0)) {
                    up = false;
                    right = true;
                }
            }
        }
        return result;
    }
};

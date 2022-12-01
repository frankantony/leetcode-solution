class Solution {
public:
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int i = 0, j = 0, cont = 0;
        int m = matrix.size(), n = matrix[0].size();
        char direction = 'R';
        while (true) {
            
            if (matrix[i][j] != 101) {
                result.push_back(matrix[i][j]);
                cont++;
            }
            
            matrix[i][j] = 101;
            if (cont == n * m) break;
            
            if (direction == 'R') {
                if (j+1 < n && matrix[i][j+1] != 101) j++;
                else direction = 'D';
            }
            else if (direction == 'L') {
                if (j-1 >= 0 && matrix[i][j-1] != 101) j--;
                else direction = 'U';
            }
            else if (direction == 'U') {
                if (i-1 >= 0 && matrix[i-1][j] != 101) i--;
                else direction = 'R';
            }
            else if (direction == 'D') {
                if (i+1 < m && matrix[i+1][j] != 101) i++;
                else direction = 'L';
            }
        }
        
        return result;
    }
};

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int len = mat.size(), max = INT_MIN, index;
        for (int i = 0; i < len; i++) {
            int count = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1)
                    count++;
            }
            if (count > max) {
                max = count;
                index = i;
            }
        }
        
        return {index, max};
    }
};

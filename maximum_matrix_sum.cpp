class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int maximumNegative = INT_MIN, len = matrix.size(), negatives = 0;
        vector<int> temp;
        for (int i = 0; i < len; i++)
            for (int j = 0; j < len; j++)
                temp.push_back(matrix[i][j]);
        sort(temp.begin(), temp.end());
        
        long long sum = 0;
        for (int i = 0; i < len * len - 1; i++) {
            if (temp[i] + temp[i+1] < 0) {
                temp[i] *= -1; 
                temp[i + 1] *= -1;
            }
            sum += temp[i];
        }

        sum += temp[len * len - 1];
        return sum;
    }
};

class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        int len = queries.size();
        int count_row = n, count_column = n;
        long long result = 0;
        vector<bool> passedRow (n, false), passedColumn (n, false);
        for (int i = len - 1; i >= 0; i--) {
            vector<int> query = queries[i];
            int type = query[0], index = query[1], value = query[2];
            if (type == 0 && !passedRow[index]) {
                result += count_column * value;
                passedRow[index] = true;
                count_row--;
            }
            else if (type == 1 && !passedColumn[index]) {
                result += count_row * value;
                passedColumn[index] = true;
                count_column--;
            }
        }
        return result;
    }
};

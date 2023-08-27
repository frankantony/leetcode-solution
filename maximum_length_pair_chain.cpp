class Solution {
public:
    static bool cmp (vector<int> x, vector<int> y) {
        return x[1] < y[1];
    }

    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), cmp);
        int len = pairs.size(), result = 1;
        vector<int> current = pairs[0];
        for (int i = 1; i < len; i++) {
            if (current[1] < pairs[i][0]) {
                result++;
                current = pairs[i];
            }
        }
        return result;
    }
};

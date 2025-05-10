class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int len = dominoes.size(), result = 0;
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                int a = dominoes[i][0], b = dominoes[i][1];
                int c = dominoes[j][0], d = dominoes[j][1];
                result += (a == c && b == d) || (a == d && b == c);
            }
        }
        return result;
    }
};

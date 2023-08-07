class Solution {
public:
    int dp[1003][26][26];
    int countJoinMaximum (vector<string>& words, int i, char first, char last) {
        if (i == words.size())
            return 0;
        if (dp[i][first - 'a'][last - 'a'] != -1)
            return dp[i][first - 'a'][last - 'a'];
        string word = words[i];
        int len = word.size();
        int alternative1 = (last == word[0]) + countJoinMaximum (words, i + 1, first, word[len-1]);
        int alternative2 = (first == word[len - 1]) + countJoinMaximum (words, i + 1, word[0], last);
        return dp[i][first - 'a'][last - 'a'] = max (alternative1, alternative2);
    }
    
    int minimizeConcatenatedLength(vector<string>& words) {
        int sumSize = 0;
        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            sumSize += word.size();
        }

        memset(dp, -1, sizeof dp);
        char first = words[0][0], last = words[0].back();
        int countJoins = countJoinMaximum (words, 1, first, last);
        return sumSize - countJoins;
    }
};

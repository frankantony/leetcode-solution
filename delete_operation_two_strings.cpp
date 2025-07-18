class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size(), n = word2.size();
        int dp[m + 1][n + 1];
        for (int i = 0; i <= m; i++)
            dp[i][0] = i;
        for (int i = 0; i <= n; i++)
            dp[0][i] =  i;

		    for (int i = 1; i <= m; i++) {
		        for (int j = 1; j <= n; j++) {
		            int value_min = min (dp[i-1][j] + 1, dp[i][j-1] + 1);
		            value_min = min (value_min, dp[i-1][j-1] + 2 * (word1[i-1] != word2[j-1]));
		            dp[i][j] = value_min;
		        }
		    }

        return dp[m][n];
        
    }
};

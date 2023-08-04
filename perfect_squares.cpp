class Solution {
public:
    int solve (int n, vector<int>& dp) {
        if (n == 0)
            return 0;
        if (dp[n] != -1)
            return dp[n];
        int result = n;
        for (int i = 1; i * i <= n; i++)
            result = min(result, 1 + solve(n - i * i, dp));
        return dp[n] = result;
    }

    int numSquares(int n) {
        vector<int> dp(n + 1, -1);
        int result = solve(n, dp);
        return result;
    }
};

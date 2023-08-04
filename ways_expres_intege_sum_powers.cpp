class Solution {
public:
    long long solve (long long i, long long n, int x, vector< vector<int> >& dp) {
        if (n == 0)
            return 1;
        if (n < 0 || i == dp.size())
            return 0;
        if (dp[i][n] != -1)
            return dp[i][n];
        long long useCurrent = solve (i + 1, n - pow(i, x), x, dp);
        long long notUseCurrent = solve (i + 1, n, x, dp);

        return dp[i][n] = (useCurrent + notUseCurrent) % 1000000007;
    }

    int numberOfWays(int n, int x) {
        vector<vector<int> > dp(n + 1, vector<int> (n + 1, -1));
        long long result = solve (1, n, x, dp);
        return result;
    }
};

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int dp[n + 1];
        dp[0] = 1;
        int prod = 9;
        for (int i = 1; i <= n; i++) {
            dp[i] = prod + dp[i - 1];
            prod *= (10 - i);
        }

        return dp[n];
    }
};

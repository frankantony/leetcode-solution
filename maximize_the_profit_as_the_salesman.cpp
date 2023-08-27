class Solution {
public:
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        vector<int> dp(n + 1);
        vector<vector<vector<int>> > m (n);
        for (auto& o : offers)
            m[o[1]].push_back(o);

        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i - 1];
            for (auto& o : m[i - 1])
                dp[i] = max(dp[i], dp[o[0]] + o[2]);
        }

        return dp[n];
    }
};

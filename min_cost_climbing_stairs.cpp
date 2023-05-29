class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();
        int dp[len];
        dp[len-1] = cost[len-1];
        dp[len-2] = cost[len-2];
        for (int i = len - 3; i >= 0; i--)
            dp[i] = cost[i] + min (dp[i+1], dp[i+2]);
        return min (dp[0], dp[1]);
    }
};

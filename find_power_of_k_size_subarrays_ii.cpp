class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> dp(len);
        dp[0] = 1;
        for (int i = 1; i < len; i++) {
            if (nums[i] - nums[i-1] == 1)
                dp[i] = dp[i-1] + 1;
            else
                dp[i] = dp[i-1];
        }

        vector<int> results;
        for (int i = k-1; i < len; i++) {
            if (dp[i] - dp[i-k+1] == k - 1)
                results.push_back(nums[i]);
            else
                results.push_back(-1);
        }

        return results;
    }
};

class Solution {
public:
    bool existsSubsetWithSum (vector<int>& nums, int k) {
        int len = nums.size();
        vector<vector<int>> dp (len + 1, vector<int> (k + 1));
        for (int i = 0; i <= len; i++)
            dp[i][0] = true;
        for (int i = 1; i <= k; i++)
            dp[0][i] = false;
        
        for (int i = 1; i <= len; i++) {
            for (int j = 1; j <= k; j++) {
                if (j < nums[i-1])
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j] || dp[i-1][j - nums[i-1]];
            }
        }
        return dp[len][k];
    }

    bool canPartition(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        int len = nums.size(), sum = 0;
        for (int i = 0; i < len; i++)
            sum += nums[i];
        if (sum % 2 != 0)
            return false;
        return existsSubsetWithSum(nums, sum / 2);
    }
    
};

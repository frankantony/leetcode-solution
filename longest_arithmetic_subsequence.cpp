class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int len = nums.size(), result = 0;
        unordered_map<int, int> dp[len];
        for (int i = 1; i < len; i++) {
            for (int previous = 0; previous < i; previous++) {
                int difference = nums[i] - nums[previous];
                if (!dp[previous].count (difference))
                    dp[previous][difference] = 1;
                dp[i][difference] = dp[previous][difference] + 1;
                result = max (dp[i][difference], result);
            }
        }
        
        return result;
    }
};

class Solution {
public:
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) {
        int len = nums1.size(), result = 1;
        vector<vector<int> > dp (len, vector<int> (2, 1));
        for (int i = 1; i < len; i++) {
            if (nums1[i] >= nums1[i-1] && nums1[i] >= nums2[i-1])
                dp[i][0] = max (dp[i-1][0], dp[i-1][1]) + 1;
            else if (nums1[i] >= nums1[i-1])
                dp[i][0] = dp[i-1][0] + 1;
            else if (nums1[i] >= nums2[i-1])
                dp[i][0] = dp[i-1][1] + 1;
            
            if (nums2[i] >= nums2[i-1] && nums2[i] >= nums1[i-1])
                dp[i][1] = max (dp[i-1][0], dp[i-1][1]) + 1;
            else if (nums2[i] >= nums2[i-1])
                dp[i][1] = dp[i-1][1] + 1;
            else if (nums2[i] >= nums1[i-1])
                dp[i][1] = dp[i-1][0] + 1;
            result = max (result, dp[i][0]);
            result = max (result, dp[i][1]);
        }
        return result;
    }
};

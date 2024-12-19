class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size(), result = 0;
        vector<vector<int>> dp (len1 + 1, vector<int> (len2 + 1, 0));
        for (int i = len1 - 1; i >= 0; i--) {
            for (int j = len2 - 1; j >= 0; j--) {
                if (nums1[i] == nums2[j])
                    dp[i][j] = dp[i+1][j+1] + 1;
                result = max (result, dp[i][j]);
            }
        }
        return result;
    }
};

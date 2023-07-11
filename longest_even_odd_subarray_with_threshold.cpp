class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int len = nums.size(), last = INT_MAX, i, result = 0;
        for (i = 0; i < len; i++) {
            if (nums[i] > threshold || (i > 0 && (nums[i] + nums[i-1]) % 2 == 0)) {
                result = max (result, i - last);
                last = INT_MAX;
            }
            if (last == INT_MAX && nums[i] <= threshold && nums[i] % 2 == 0)
                last = i;
        }
        result = max (result, i - last);
        return result;
    }
};

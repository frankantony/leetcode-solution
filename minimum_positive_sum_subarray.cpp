class Solution {
public:
    int sumMinimumPositive (int a, vector<int>& nums) {
        int sumCurrent = 0;
        for (int i = 0; i < a; i++)
            sumCurrent += nums[i];
        int result = (sumCurrent > 0 ) ? sumCurrent: INT_MAX, right = a, len = nums.size();
        while (right < len) {
            sumCurrent = sumCurrent - nums[right - a] + nums[right];
            if (sumCurrent > 0)
                result = min (result, sumCurrent);
            right++;
        }
        return result;
    }

    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int result = INT_MAX, len = nums.size();
        for (int i = l; i <= r; i++)
            result = min (sumMinimumPositive (i, nums), result);
        return (result != INT_MAX) ? result: -1;
    }
};

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int len = nums.size(), result = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len - 1; i++)
            if (nums[i] < nums[i+1])
                  result = max (result, nums[i+1] - nums[i]);
        return result;
    }
};

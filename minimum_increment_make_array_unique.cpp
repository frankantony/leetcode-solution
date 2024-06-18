class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size(), result = 0;
        for (int i = 0; i < len-1; i++)
            if (nums[i] >= nums[i+1]) {
                int increment = nums[i]- nums[i+1] + 1;
                result += increment;
                nums[i+1] += increment;
            }
        return result;
    }
};

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int len = nums.size(), current = abs(nums[0]), result = nums[0];
        for (int i = 1; i < len; i++) {
            if (current > abs (nums[i])) {
                current = abs (nums[i]);
                result = nums[i];
            }
            if (current == abs (nums[i]))
                result = max (result, nums[i]);
        }
        return result;
    }
};

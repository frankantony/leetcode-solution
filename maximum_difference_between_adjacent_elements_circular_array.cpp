class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int result = 0, len = nums.size();
        for (int i = 0; i < len - 1; i++)
            result = max (result, abs(nums[i] - nums[i+1]));
        result = max (result, abs(nums[len-1] - nums[0]));
        return result;
    }
};

class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int result = 0, len = nums.size();
        for (int i = 0; i < len - 2; i++)
            result += 2 * (nums[i] + nums[i + 2]) == nums[i+1];
        return result;
    }
};

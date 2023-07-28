class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int len = nums.size();
        long long result = nums[len - 1];
        for (int i = len - 1; i >= 1; i--) {
            if (result >= nums[i - 1])
                result = nums[i - 1] + result;
            else
                result = nums[i - 1];
        }
        return result;
    }
};

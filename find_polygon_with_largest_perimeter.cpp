class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long result = -1, sum = nums[0] + nums[1];
        int len = nums.size();
        for (int i = 2; i < len; i++) {
            if (sum > nums[i])
                result = sum + nums[i];
            sum += nums[i];
        }
        return result;
    }
};

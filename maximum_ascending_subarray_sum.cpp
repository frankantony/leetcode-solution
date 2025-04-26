class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = 0, len = nums.size(), result = 0;
        nums.push_back(nums[len - 1] - 1);
        for (int i = 0; i < len; i++) {
            if (nums[i] < nums[i+1])
                sum += nums[i];
            else {
                sum += nums[i];
                result = max (result, sum);
                sum = 0;
            }
        }

        return result;
    }
};

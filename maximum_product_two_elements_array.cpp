class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        return (nums[len - 1] - 1) * (nums[len - 2] - 1);
    }
};

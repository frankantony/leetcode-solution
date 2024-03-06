class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len = nums.size(), l = len - 2;
        while (l >= 0 && nums[l] >= nums[l + 1])
            l--;

        if (l >= 0) {
            int r = len - 1;
            while (r > l && nums[r] <= nums[l])
                r--;
            swap(nums[r], nums[l]);
        }

        reverse(nums.begin() + l + 1, nums.end());
    }
};

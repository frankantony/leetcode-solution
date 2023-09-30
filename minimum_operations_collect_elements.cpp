class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int len = nums.size(), i = len - 1, count = 0;
        vector<bool> used(len, false);
        while (i >= 0 && count < k) {
            count += (nums[i] <= k && !used[nums[i]]);
            used[nums[i]] = true;
            i--;
        }
        return len - 1 - i;
    }
};

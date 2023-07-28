class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> nums(n + 1, 0);
        int result = 0;
        for (int i = 1; i <= n; i++) {
            if (i == 1)
                nums[i] = 1;
            else if (i % 2 == 0)
                nums[i] = nums[i / 2];
            else
                nums[i] = nums[i / 2] + nums[i / 2 + 1];
            result = max (result, nums[i]);
        }
        return result;
    }
};

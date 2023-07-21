class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int len = nums.size(), maximum = 0, minimum = 101, value = -1;
        sort (nums.begin(), nums.end());
        for (int i = 0; i < len; i++)
            if (nums[i] != nums[0] && nums[i] != nums[len-1])
                return nums[i];
        return -1;
    }
};

class Solution {
public:
    bool check(vector<int>& nums) {
        int len = nums.size(), decrease = 0;
        for (int i = 0; i < len - 1; i++)
            if (nums[i] > nums[i+1])
                decrease++;

        return decrease == 0 || (decrease == 1 && nums[len-1] <= nums[0]);
    }
};

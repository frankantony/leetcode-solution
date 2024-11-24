class Solution {
public:
    bool isIncremovable (int a, int b, int len, vector<int>& nums) {
        for (int i = 0; i < a - 1; i++)
            if (nums[i] >= nums[i+1])
                return false;
        if (a > 0 && b < len-1 && nums[a-1] >= nums[b+1])
            return false;
        for (int i = b+1; i < len - 1; i++)
            if (nums[i] >= nums[i+1])
                return false;
        return true;
    }

    int incremovableSubarrayCount(vector<int>& nums) {
        int len = nums.size(), result = 0;
        for (int i = 0; i < len; i++)
            for (int j = i; j < len; j++)
                result += isIncremovable (i, j, len, nums);
        return result;
    }
};

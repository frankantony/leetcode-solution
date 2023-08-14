class Solution {
public:
    bool checkArray(vector<int>& nums, int k) {
        int i = 0, len = nums.size(), sumPrevious = 0;
        while (i < len) {
            if (sumPrevious > nums[i])
                return false;
            nums[i] -= sumPrevious;
            sumPrevious += nums[i];
            if (i - k + 1 >= 0)
                sumPrevious -= nums[i - k + 1];
            i++;
        }
        return sumPrevious == 0;
    }
};

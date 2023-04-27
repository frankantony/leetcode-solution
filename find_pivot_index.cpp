class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, len = nums.size();
        for (int i = 0; i < len; i++)
            sum += nums[i];
        int sumCurrent = 0;
        for (int i = 0; i < len; i++) {
            sum -= nums[i];
            if (sum == sumCurrent)
                return i;
            sumCurrent += nums[i];
        }
        return -1;
    }
};

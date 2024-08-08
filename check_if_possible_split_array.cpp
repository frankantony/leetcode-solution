class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        int len = nums.size(), sum = 0;
        for (int i = 0; i < len; i++)
            sum += nums[i];
        
        int i = 0, j = len - 1;
        while (i < j) {
            if (nums[i] + nums[i+1] > nums[j] + nums[j-1])
                sum -= nums[j--];
            else
                sum -= nums[i++];

            if (sum < m && j - i + 1 > 1)
                return false;
        }

        return true;
    }
};

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort (nums.begin(), nums.end());
        int maximum = nums.back(), sum = 0;
        for (int i = 0; i < k; i++)
            sum += (maximum + i);
        return sum;
    }
};

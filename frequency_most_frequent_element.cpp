class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int maxFrequence = 1, i = 0, len = nums.size();
        long current = 0;
        sort(nums.begin(), nums.end());
        for (int j = 0; j < len; j++) {
            current += nums[j];
            while (i < j && current + k < (long) nums[j] * (j - i + 1))
                current -= nums[i++];
            maxFrequence = max (maxFrequence, j - i + 1);
        }
        return maxFrequence;
    }
};

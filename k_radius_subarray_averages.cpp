class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long sum = 0, len = nums.size();
        vector<int> avg (len, -1);
        for (int j = 0; j < len && j < 2 * k + 1; j++)
            sum += nums[j];
        int i = k;
        while (i + k + 1 < len) {
            avg[i] = sum / (2 * k + 1);
            sum = sum - nums[i - k] + nums[i + k + 1];
            i++;
        }
        
        if (i + k < len)
            avg[i] = sum / (2 * k + 1);
        return avg;
    }
};

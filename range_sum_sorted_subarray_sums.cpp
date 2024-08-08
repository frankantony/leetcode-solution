class Solution {
public:
    long MOD = 1000000007;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int currentSum;
        vector<long> sum;
        for (int i = 0; i < n; i++) {
            currentSum = nums[i];
            sum.push_back(currentSum);
            for (int j = i + 1; j < n; j++) {
                currentSum += nums[j];
                sum.push_back(currentSum);
            }
        }

        sort(sum.begin(), sum.end());
        int lenSum = sum.size();
        long result = 0;
        for (int i = left - 1; i < right; i++) {
            result += sum[i];
            while (result >= MOD)
                result -= MOD;
        }
        
        return result;
    }
};

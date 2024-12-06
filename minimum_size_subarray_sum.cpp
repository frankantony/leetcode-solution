class Solution {
public:
    int search (int target, int i, vector<int>& prefixSum) {
        int a = i, len = prefixSum.size(), b = len - 1;
        while (a <= b) {
            int mid = (a + b) / 2;
            if (prefixSum[mid] - prefixSum[i] >= target && prefixSum[mid - 1] - prefixSum[i] < target)
                return mid - i;
            else if (prefixSum[mid] - prefixSum[i] < target)
                a = mid + 1;
            else
                b = mid - 1;
        }
        return INT_MAX;
    }

    int minSubArrayLen(int target, vector<int>& nums) {
        int len = nums.size();
        vector<int> prefixSum(len);
        prefixSum.push_back(0);
        for (int i = 1; i <= len; i++)
            prefixSum[i] = prefixSum[i-1] + nums[i-1];

        int result = INT_MAX;
        for (int i = 0; i <= len; i++) {
            int v = search (target, i, prefixSum);
            result = min (result, v);
        }

        return (result != INT_MAX) ? result : 0;
    }
};

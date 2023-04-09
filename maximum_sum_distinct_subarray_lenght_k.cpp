class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0, result = 0;
        int len = nums.size();
        map<int, int> freq;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
            freq[nums[i]]++;
        }

        if (freq.size() == k)
            result = sum;
        for (int i = k; i < len; i++) {
            sum -= nums[i-k];
            sum += nums[i];
            if (freq[nums[i-k]] == 1)
                freq.erase(nums[i-k]);
            else
                freq[nums[i-k]]--;
            
            freq[nums[i]]++;
            if (freq.size() == k)
                result = max (result, sum);
        }
        return result;
    }
};

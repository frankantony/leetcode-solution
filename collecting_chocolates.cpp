class Solution {
public:
    long long minCost(vector<int>& nums, int x) {
        vector<long long> cost;
        int len = nums.size();
        for (long long i = 0; i < len; i++)
            cost.push_back(i * x);
        
        for (int i = 0; i < len; i++) {
            int current = nums[i];
            for (int j = 0; j < len; j++) {
                current = min (current, nums[(i + j) % len]);
                cost[j] += current;
            }
        }

        long long result = cost[0];
        for (int i = 1; i < len; i++)
            result = min (result, cost[i]);
        return result;
    }
};

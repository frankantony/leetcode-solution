class Solution {
public:
    static bool cmp (int x, int y) {
        return x > y;
    }

    vector<int> minSubsequence(vector<int>& nums) {
        int sum = 0, len  = nums.size();
        for (int i = 0; i < len; i++)
            sum += nums[i];
        sort (nums.begin(), nums.end(), cmp);
        int current = 0, index = 0;
        while (index < len && current <= sum - current)
            current += nums[index++];
        vector<int> result;
        for (int i = 0; i < index; i++)
            result.push_back(nums[i]);
        return result;
    }
};

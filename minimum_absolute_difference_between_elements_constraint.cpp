class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        int result = INT_MAX, len = nums.size();
        set<int> current;
        for (int i = x; i < len; i++) {
            current.insert(nums[i - x]);
            auto it = current.upper_bound(nums[i]);
            if (it != current.begin())
                result = min (result, abs(nums[i] - *prev(it)));
            if (it != current.end())
                result = min (result, abs(nums[i] - *it));
        }
        return result;
    }
};

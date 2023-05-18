class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len = nums.size(), x = nums[0], y = INT_MAX;
        for (int i = 1; i < len; i++) {
            int current = nums[i];
            x = min (x, current);
            if (current > x)
                y = min (y, current);
            if (current > y)
                return true;
        }
        return false;
    }
};

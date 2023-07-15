class Solution {
public:
    int gcd (int a, int b) {
        if (b == 0)
            return a;
        return gcd (b, a % b);
    }

    int findGCD(vector<int>& nums) {
        int len = nums.size(), maximum = 0, minimum = INT_MAX;
        for (int i = 0; i < len; i++) {
            minimum = min (minimum, nums[i]);
            maximum = max (maximum, nums[i]);
        }
        return gcd (minimum, maximum);
    }
};

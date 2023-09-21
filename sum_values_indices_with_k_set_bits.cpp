class Solution {
public:
    int countBits (int n) {
        int result = 0;
        while (n != 0) {
            result += (n % 2);
            n /= 2;
        }
        return result;
    }

    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int len = nums.size(), result = 0;
        for (int i = 0; i < len; i++) {
            int c = countBits (i);
            result += (c == k) ? nums[i]: 0;
        }
        return result;
    }
};

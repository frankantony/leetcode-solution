class Solution {
public:
    int maximumDigit (int n) {
        int result = 0;
        while (n != 0) {
            result = max(result, n % 10);
            n /= 10;
        }
        return result;
    }

    int maxSum(vector<int>& nums) {
        int len = nums.size(), result = -1;
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                int x = nums[i], y = nums[j];
                if (maximumDigit(x) == maximumDigit(y) && result < x + y)
                    result = x + y;
            }
        }
        return result;
    }
};

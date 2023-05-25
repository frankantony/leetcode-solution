class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int sumOdd = 0, sumEven = 0, x = 0, y = 0, result = 0, len = nums.size();
        for (int i = 0; i < len; i++) {
            if (i % 2 == 0)
                sumEven += nums[i];
            else
                sumOdd += nums[i];
        }

        for (int i = 0; i < len; i++) {
            if (i % 2 == 0)
                sumEven -= nums[i];
            else
                sumOdd -= nums[i];
            if (x + sumOdd == y + sumEven)
                result++;
            if (i % 2 == 0)
                x += nums[i];
            else
                y += nums[i];
        }
        return result;
    }
};

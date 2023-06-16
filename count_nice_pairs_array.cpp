class Solution {
public:
    int rev (int num) {
        int result = 0;
        while (num != 0) {
            result = result * 10 + num % 10;
            num = num / 10;
        }
        return result;
    }

    int countNicePairs(vector<int>& nums) {
        map<int, int> count;
        int len = nums.size();
        long long result = 0;
        for (int i = 0; i < len; i++) {
            result += (count[nums[i] - rev(nums[i])]);
            if (result >= 1000000007)
                result -= 1000000007;
            count[nums[i] - rev(nums[i])]++;
        }
        return result;
    }
};

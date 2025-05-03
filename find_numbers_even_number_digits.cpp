class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int len = nums.size(), result = 0;
        for (int i = 0; i < len; i++) {
            int numberOfDigits = to_string(nums[i]).size();
            result += numberOfDigits % 2 == 0;
        }
        return result;
    }
};

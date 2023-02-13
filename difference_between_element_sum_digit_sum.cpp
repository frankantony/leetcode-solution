class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0, digit_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int value = nums[i];
            element_sum += value;
            while (value) {
                digit_sum += (value % 10);
                value /= 10;
            }
        }
        return abs (element_sum - digit_sum);
    }
};

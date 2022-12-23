class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, len = nums.size(), j = len - 1, c = len - 1;
        vector<int> result(len);
        while (i <= j) {
            if (abs(nums[i]) >= nums[j]) {
                result[c--] = nums[i]*nums[i];
                i++;
            }
            else {
                result[c--] = nums[j]*nums[j];
                j--;
            }
        }
        return result;
    }
};

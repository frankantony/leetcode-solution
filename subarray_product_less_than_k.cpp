class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i = 0, prod = 1, len = nums.size(), result = 0;
        for (int j = 0; j < len; j++) {
            prod *= nums[j];
            while (prod >= k && j >= i)
                prod /= nums[i++];
            result += (j - i + 1);
        }
        return result;
    }
};

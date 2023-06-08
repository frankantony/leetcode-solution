class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int len = nums.size(), a, b;
        for (int i = 0; i < len; i++) {
            if (nums[i] == 1)
                a = i;
            if (nums[i] == len)
                b = i;
        }
        return a + (len - 1) - b - (a > b);
    }
};

class Solution {
public:
    int solve (vector<int>& nums, int flag) {
        int cont = 1, result = 1, len = nums.size();
        for (int i = 0; i < len - 1; i++) {
            if (flag * (nums[i] - nums[i+1]) < 0)
                cont++;
            else {
                result = max (result, cont);
                cont = 1;
            }
        }

        return max(result, cont);
    }

    int longestMonotonicSubarray(vector<int>& nums) {
        int cont = 1, result = 1, increaseMaximum = solve(nums, 1), decreaseMaximum = solve(nums, -1);
        return max (increaseMaximum, decreaseMaximum);
    }
};

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int len = nums.size();
        int result = 0, minimum = nums[0];
        for (int i = 1; i < len; i++)
            minimum = min(minimum, nums[i]);
        for (int i = 0; i < len; i++)
            result += (nums[i] - minimum);
        return result;
    }
};

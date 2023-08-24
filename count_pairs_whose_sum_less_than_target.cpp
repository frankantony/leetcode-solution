class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int len = nums.size(), result = 0;
        for (int i = 0; i < len; i++)
            for (int j = i + 1; j < len; j++)
                result += (nums[i] + nums[j] < target);
        return result;
    }
};

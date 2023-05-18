class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int len = nums.size(), result = 0;
        for (int i = 0; i < len; i++)
            for (int j = i + 1; j < len; j++)
                for (int k = j + 1; k < len; k++)
                    if (nums[i] != nums[j] && nums[i] != nums[k] && nums[j] != nums[k])
                        result++;
        return result;
    }
};

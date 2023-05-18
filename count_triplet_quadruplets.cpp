class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int len = nums.size(), result = 0;
        for (int i = 0; i < len; i++)
            for (int j = i + 1; j < len; j++)
                for (int k = j + 1; k < len; k++)
                    for (int l = k + 1; l < len; l++)
                        if (nums[i] + nums[j] + nums[k] == nums[l])
                            result++;
        return result;
    }
};

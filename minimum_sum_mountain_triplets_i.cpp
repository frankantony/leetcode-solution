class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int len = nums.size(), result = INT_MAX;
        for (int i = 0; i < len; i++)
            for (int j = i + 1; j < len; j++)
                for (int k = j + 1; k < len; k++)
                    if (nums[i] < nums[j] && nums[k] < nums[j])
                        result = min (result, nums[i] + nums[j] + nums[k]);
        
        if (result == INT_MAX)
            return -1;
        return result;
    }
};

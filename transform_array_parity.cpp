class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int len = nums.size(), b = len - 1;
        vector<int> result(len, 0);
        for (int i = 0; i < len; i++)
            if (nums[i] % 2 != 0)
                result[b--] = 1;
        return result;
    }
};

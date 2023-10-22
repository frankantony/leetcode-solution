class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int len = nums.size();
        vector<int> prefix (len);
        vector<int> suffix (len);
        int m = INT_MAX;
        for (int i = 0; i < len; i++) {
            prefix[i] = m;
            m = min (m, nums[i]);
        }

        m = INT_MAX;
        for (int i = len - 1; i >= 0; i--) {
            suffix[i] = m;
            m = min (m, nums[i]);
        }

        int result = INT_MAX;
        for (int i = 1; i < len; i++)
            if (prefix[i] < nums[i] && suffix[i] < nums[i])
                result = min (result, nums[i] + prefix[i] + suffix[i]);
        
        if (result == INT_MAX)
            return -1;
        return result;
    }
};

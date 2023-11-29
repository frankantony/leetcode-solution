class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        vector<int> result;
        for (int i = 0; i < len; i++)
            if (nums[i] == target)
                result.push_back(i);
        return result;
    }
};

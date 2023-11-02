class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int len = nums.size(), j1 = 0, j2 = 0;
        for (int i = indexDifference; i < len; i++) {
            if (nums[j1] > nums[i - indexDifference])
                j1 = i - indexDifference;
            if (nums[j2] < nums[i - indexDifference])
                j2 = i - indexDifference;
            if (abs (i - j1) >= indexDifference && abs(nums[i] - nums[j1]) >= valueDifference)
                return {i, j1};
            if (abs(i - j2) >= indexDifference && abs(nums[i] - nums[j2]) >= valueDifference)
                return {i, j2};
        }
        return {-1, -1};
    }
};

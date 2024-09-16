class Solution {
public:
    int powerOfArray (vector<int>& nums, int a, int b) {
        for (int i = a; i < b; i++)
            if (nums[i+1] - nums[i] != 1)
                return -1;
            return nums[b];
    }

    vector<int> resultsArray(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> results(len-k+1);
        for (int i = 0; i < len-k+1; i++)
            results[i] = powerOfArray(nums, i, i + k - 1);
        return results;
    }
};

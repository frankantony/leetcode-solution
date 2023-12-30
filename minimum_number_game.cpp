class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        int i = 0, j = 1, len = nums.size();
        vector<int> result;
        while (j < len) {
            result.push_back (nums[j]);
            result.push_back (nums[i]);
            i += 2;
            j += 2;
        }
        return result;
    }
};

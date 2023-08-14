class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int result = 0, i = 0;
        for (int j = 1; j < len; j++)
            if (nums[i] < nums[j]) {
                i++;
                result++;
            }
        return result;
    }
};

class Solution {
public:
    int countElements(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        int result = 0, len = nums.size();
        for (int i = 1; i < len - 1; i++)
            if (nums[i] != nums[len - 1] && nums[i] != nums[0])
                result++;
        return result;
    }
};

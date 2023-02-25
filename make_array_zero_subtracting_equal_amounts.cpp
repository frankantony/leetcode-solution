class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.push_back(101);
        int len = nums.size(), result = 0;
        for (int i = 0; i < len - 1; i++)
            if (nums[i] != nums[i + 1] && nums[i] != 0)
                result++;
        return result;
    }
};

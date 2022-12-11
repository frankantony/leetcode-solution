class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = nums[0], len = nums.size();

        for (int i = 1; i < len; i++)
            result = result ^ nums[i];
        
        return result;
    }
};

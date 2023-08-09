class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len = nums.size();
        vector<int> result(len, 0);
        for (int i = 0; i < len; i++)
            for (int j = 0; j < len; j++)
                result[i] += (nums[j] < nums[i] && j != i);
        return result;   
    }
};

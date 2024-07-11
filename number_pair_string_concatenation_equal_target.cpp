class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int len = nums.size(), count = 0;
        for (int i = 0; i < len; i++)
            for (int j = 0; j < len; j++) 
                if (i != j && nums[i] + nums[j] == target)
                    count++;
        return count;
    }
};

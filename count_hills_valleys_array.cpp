class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> unique;
        unique.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
            if (unique.back() != nums[i])
                unique.push_back(nums[i]);
        int result = 0;
        for (int i = 1; i < unique.size() - 1; i++)
            result += (unique[i-1] < unique[i] && unique[i+1] < unique[i])
                    || (unique[i-1] > unique[i] && unique[i+1] > unique[i]);
        return result;
    }
};

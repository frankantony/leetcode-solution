class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int len = nums.size(), i = 0;
        while (i < len - 1 && nums[i] == nums[i+1])
            i++;
        if (i == len - 1)
            return true;
        bool increase = nums[i] < nums[i + 1];
        while (i < len - 1) {
            if ((increase && nums[i] > nums[i + 1]) || 
                (!increase && nums[i] < nums[i + 1]))
                return false;
            i++;
        }
        return true;
    }
};

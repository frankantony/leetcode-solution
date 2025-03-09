class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int len = nums.size();
        bool find = false;
        for (int i = 0; i < len - 1; i++) {
            if (nums[i] > nums[i+1]) {
                if (find)
                    return false;
                if (i >= 1 && nums[i-1] > nums[i+1] && i < len - 2 && nums[i] > nums[i+2])
                    return false;
                find = true;
            }
        }
        return true;
    }
};

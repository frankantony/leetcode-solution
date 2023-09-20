class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int len = nums.size(), i = 0, index = len - 1;
        while (i < len) {
            if (nums[i] > nums[(i + 1) % len]) {
                if (index == len - 1)
                    index = i;
                else
                    return -1;
            }
            i++;
        }
        
        return len - index - 1;
    }
};

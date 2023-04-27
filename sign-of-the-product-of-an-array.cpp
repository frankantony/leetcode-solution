class Solution {
public:
    int arraySign(vector<int>& nums) {
        int len = nums.size(), negatives = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] < 0)
                negatives++;
            else if (nums[i] == 0)
                return 0;
        }
        if (negatives % 2 == 0)
            return 1;
        else
            return -1;
    }
};

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        int initial = 0, end = len - 1;
        for (int i = 0;i < len; i++) {
            if (nums[i] == 0)
                initial++;
            else if (nums[i] == 2)
                end--;
        }

        for (int i = 0; i < len; i++) {
            if (i < initial)
                nums[i] = 0;
            else if (i <= end)
                nums[i] = 1;
            else
                nums[i] = 2;
        }    
    }
};

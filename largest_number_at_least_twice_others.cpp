class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int indexMax = 0, max = 0, len = nums.size();
        for (int i = 0; i < len; i++) {
            if (max < nums[i]) {
                indexMax = i;
                max = nums[i];
            }
        }
        for (int i = 0; i < len; i++)
            if (i != indexMax && max < 2 * nums[i])
                return -1;
        return indexMax;
    }
};

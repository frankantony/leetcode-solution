class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int len = nums.size(), result = -1, j;
        for (int i = 0; i < len-1; i++) {
            int currentDiff = nums[i+1] - nums[i];
            if (currentDiff != 1) continue;
            for (j = i + 2; j < len; j++) {
                int difference = nums[j] - nums[j-1];
                if (difference != currentDiff && abs(difference) == 1)
                    currentDiff = difference;
                else
                    break;
            }
            result = max (result, j - i);
        }
        return result;
    }
};

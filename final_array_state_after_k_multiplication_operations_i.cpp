class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int len = nums.size();
        for (int i = 0; i < k; i++) {
            int m = INT_MAX, index;
            for (int j = 0; j < len; j++) {
                if (m > nums[j]) {
                    m = nums[j];
                    index = j;
                }
            }
            
            nums[index] = multiplier * nums[index];
        }

        return nums;
    }
};

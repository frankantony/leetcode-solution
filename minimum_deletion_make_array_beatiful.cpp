class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int result = 0, len = nums.size(), count = 0;
        if (len == 1) return 1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (count % 2 == 0) {
                if (nums[i] == nums[i+1]) {
                    result++;
                    len--;
                    continue;
                }
            }
            count++;
        }

        if (len % 2 != 0)
            result++;
        
        return result;
    }
};

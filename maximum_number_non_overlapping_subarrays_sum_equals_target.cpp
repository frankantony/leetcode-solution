class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        int len = nums.size(), sum = 0, result = 0;
        map<int, int> table;
        table[0] = 1;
        for (int i = 0; i < len; i++) {
            sum += nums[i];
            if (table.find(sum - target) != table.end()) {
                result++;
                table.clear();
            }
            
            table[sum]++;
        }

        return result;
    }
};

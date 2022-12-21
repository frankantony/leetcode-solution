class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int len = nums.size(), sum = 0, result = 0;
        map<int, int> table;
        table[0] = 1;
        for (int i = 0; i < len; i++) {
            sum += nums[i];
            if (table.find(sum - k) != table.end())
                result += table[sum - k];
            
            table[sum]++;
        }
        return result;
    }
};

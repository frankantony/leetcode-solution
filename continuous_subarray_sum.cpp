class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int len = nums.size();
        map<int, bool> table;
        int sumCurrent = 0, sumPrevious = 0;
        for (int i = 0; i < len; i++) {
            sumCurrent = (nums[i] + sumCurrent) % k;
            if (table[sumCurrent])
                return true;
            table[sumPrevious] = true;
            sumPrevious = sumCurrent;
        }
        return false;
    }
};

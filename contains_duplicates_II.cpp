class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int len = nums.size(), cont = 1;
        map<int, int> table;
        for (int i = 0; i < len; i++) {
            if (table.find(nums[i]) != table.end() && i - table[nums[i]] <= k)
                return true;
            table[nums[i]] = i;
        }
        return false;
    }
};

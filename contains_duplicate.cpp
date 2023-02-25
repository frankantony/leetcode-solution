class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> table;
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            if (table[nums[i]] == 1)
                return true;
            table[nums[i]]++;
        }
        return false;
    }
};

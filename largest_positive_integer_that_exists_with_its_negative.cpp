class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int len = nums.size();
        map<int, bool> table;
        int result = -1;
        for (int i = 0; i < len; i++) {
            int value = nums[i];
            if (table[-value]) {
                result = max (result, value);
                result = max (result, -value);
            }
            table[value] = true;
        }
        return result;
    }
};

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int len = nums.size(), result = 0;
        for (int i = 0; i < len; i++) {
            set<int> distinct;
            for (int j = i; j < len; j++) {
                distinct.insert(nums[j]);
                int lenDistincts = distinct.size();
                result += lenDistincts * lenDistincts;
            }
        }
        return result;
    }
};

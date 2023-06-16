class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        map<int, int> count;
        long long len = nums.size(), goodPairs = 0;
        for (int i = 0; i < len; i++) {
            goodPairs += count[nums[i] - i];
            count[nums[i] - i]++;
        }
        long long everyCombinations = ((len * len) - len) / 2;
        long long result = everyCombinations - goodPairs;
        return result;
    }
};

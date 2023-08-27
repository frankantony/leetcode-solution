class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        int i = 0, len = nums.size(), maxFrequence = 0;
        map<int, int> frequence;
        for (int j = 0; j < len; j++) {
            frequence[nums[j]]++;
            maxFrequence = max (maxFrequence, frequence[nums[j]]);
            if (j - i + 1 - maxFrequence > k) {
                frequence[nums[i]]--;
                i++;
            }
        }
        return maxFrequence;
    }
};

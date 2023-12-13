class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i = 0, j = 0, len = nums.size(), result = 0;
        map<int, int> frequence;
        for (int i = 0; i < len; i++)
            frequence[nums[i]] = 0;
        
        while (j < len) {
            if (frequence[nums[j]] + 1 <= k) {
                frequence[nums[j]]++;
                result = max (result, j - i + 1);
                j++;
            }
            else {
                frequence[nums[i]]--;
                i++;
            }
        }
        return result;
    }
};

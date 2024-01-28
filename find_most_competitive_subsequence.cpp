class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> result;
        int len = nums.size(), c = 0;
        for (int i = 0; i < len; i++) {
            while (c < len - k && !result.empty() && result.back() > nums[i]) {
                result.pop_back();
                c++;
            }
            result.push_back(nums[i]);
        }
        
        while (result.size() > k) {
            result.pop_back();
        }
        
        return result;
    }
};

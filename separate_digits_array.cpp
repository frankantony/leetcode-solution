class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int len = nums.size();
        vector<int> result;
        for (int i = 0; i < len; i++) {
            string s = to_string(nums[i]);
            int j = 0, l = s.size();
            while (j < l) {
                result.push_back(s[j] - '0');
                j++;
            }
        }
        return result;
    }
};

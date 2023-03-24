class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int len = nums.size();
        int answer[len];
        int current = nums[0];

        vector<bool> result;
        result.push_back(current % 5 == 0);
        for (int i = 1; i < len; i++) {
            int value = (current * 2) + nums[i];
            if (value >= 5) {
                int div = value / 5;
                value -= div * 5;
            }

            result.push_back(value == 0);
            current = value;
        }

        return result;
    }
};

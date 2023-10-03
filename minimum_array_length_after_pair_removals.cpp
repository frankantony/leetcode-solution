class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int len = nums.size(), maxFrequence = 0, count = 1;
        nums.push_back(0);
        for (int i = 0; i < len; i++) {
            if (nums[i] == nums[i+1])
                count++;
            else {
                maxFrequence = max(maxFrequence, count);
                count = 1;
            }
        }

        if (maxFrequence <= len / 2)
            return len % 2;
        return maxFrequence - (len - maxFrequence);
    }
};

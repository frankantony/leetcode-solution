class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int len = nums.size(), maxFrequence = 1;
        map<int, int> frequence;
        for (int i = 0; i < len; i++) {
            frequence[nums[i]]++;
            maxFrequence = max (maxFrequence, frequence[nums[i]]);
        }

        int result = 0;
        for (map<int, int>::iterator it = frequence.begin(); it != frequence.end(); ++it)
            if (it->second == maxFrequence)
                result += it->second;

        return result;
    }
};

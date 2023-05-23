class Solution {
public:
    int xSmaller (map<int, int>& frequence, int x) {
        int count = 0;
        for (map<int, int>::iterator it = frequence.begin(); it != frequence.end(); ++it) {
            count += it->second;
            if (count >= x && it->first < 0)
                return it->first;
        }
        return 0;
    }

    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        map<int, int> frequence;
        for (int i = 0; i < k; i++)
            frequence[nums[i]]++;
        int x_smaller = xSmaller (frequence, x);
        vector<int> result;
        result.push_back(x_smaller);
        int i = 0, len = nums.size();
        while (i < len - k) {
            frequence[nums[i]]--;
            frequence[nums[i + k]]++;
            x_smaller = xSmaller (frequence, x);
            result.push_back(x_smaller);
            i++;
        }
        return result;
    }
};

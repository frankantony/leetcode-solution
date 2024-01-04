class Solution {
public:
    int countOperations (int x) {
        if (x == 1)
            return -1;
        else if (x % 3 == 0)
            return x / 3;
        return x / 3 + 1;
    }

    int minOperations(vector<int>& nums) {
        map<int, int> frequence;
        int len = nums.size();
        for (int i = 0; i < len; i++)
            frequence[nums[i]]++;
        int result = 0;
        for (map<int, int>::iterator it = frequence.begin(); it != frequence.end(); ++it) {
            int c = countOperations(it->second);
            if (c == -1)
                return -1;
            result += c;
        }
        return result;
    }
};

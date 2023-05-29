class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int len = nums.size();
        map<int, int> count;
        for (int i = 0; i < len; i++)
            count[nums[i]]++;
        int result = 0;
        for (map<int, int>::iterator it = count.begin(); it != count.end(); ++it)
            if (it->second == 1)
                result += (it->first);
        return result;
    }
};

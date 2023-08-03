class Solution {
public:
    bool isGood(vector<int>& nums) {
        int len = nums.size();
        map<int, int> count;
        for (int i = 0; i < len; i++)
            count[nums[i]]++;
        for (int i = 1; i < len - 1; i++)
            if (count[i] != 1)
                return false;
        return count[len - 1] == 2;
    }
};

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int, bool> table;
        map<int, int> count;
        int len = nums.size(), result = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; i++) {
            int difference = nums[i] - k;
            if (table[difference]) {
                result++;
                table[difference] = false;
            }
            table[nums[i]] = true;
            count[nums[i]]++;
        }
        
        int sum = 0;
        for (map<int, int>::iterator it = count.begin(); it != count.end(); ++it)
            if (it->second >= 2)
                sum++;
        return (k == 0) ? sum: result;
    }
};

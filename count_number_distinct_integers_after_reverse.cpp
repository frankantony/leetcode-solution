class Solution {
public:
    int reverse (int x) {
        int result = 0;
        string reverse = "";
        while (x) {
            reverse += (x % 10)  + '0';
            x /= 10;
        }
        return stoi(reverse);
    }

    int countDistinctIntegers(vector<int>& nums) {
        map<int, bool> table;
        int len = nums.size(), count = 0;
        for (int i = 0; i < len; i++) {
            count += !table[nums[i]];
            table[nums[i]] = true;
        }
        
        for (int i = 0; i < len; i++) {
            int rev = reverse (nums[i]);
            count += !table[rev];
            table[rev] = true;
        }
        return count;
    }
};

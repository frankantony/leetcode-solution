class Solution {
public:
    int gcd (int x, int y) {
        if (y == 0)
            return x;
        return gcd (y, x % y);
    }

    int firstDigit (int x) {
        string s = to_string(x);
        int len = s.size();
        return s[0] - '0';
    }

    int countBeautifulPairs(vector<int>& nums) {
        int len = nums.size(), result = 0;
        for (int i = 0; i < len; i++)  {
            for (int j = i + 1; j < len; j++) {
                int x = firstDigit(nums[i]), y = nums[j] % 10;
                if (gcd(x, y) == 1)
                    result++;
            }
        }
        return result;
    }
};

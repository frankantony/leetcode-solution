class Solution {
public:
    long long stringToLongLong (string s) {
        long long result = 0, power = 1;
        int len = s.size();
        for (int i = len - 1; i >= 0; i--) {
            result += power * (s[i]-'0');
            power *= 10;
        }
        return result;
    }

    static bool cmp (char x, char y) {
        return x > y;
    }

    long long smallestNumber(long long num) {
        bool isNegative = false;
        if (num < 0) {
            isNegative = true;
            num = -num;
        }
        string digits = to_string(num);
        if (isNegative) {
            sort(digits.begin(), digits.end(), cmp);
            return -stringToLongLong(digits);
        }
        else {
            sort(digits.begin(), digits.end());
            int len = digits.size(), i = 0;
            while (i < len && digits[i] == '0')
                i++;
            if (i < len && digits[0] == '0')
                swap(digits[0], digits[i]);
            return stringToLongLong(digits);
        }

    }
};

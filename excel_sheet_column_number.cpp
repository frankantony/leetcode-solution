class Solution {
public:
    long long titleToNumber(string columnTitle) {
        long long result = 0, len = columnTitle.size(), power = 1;
        for (int i = len-1; i >= 0; i--) {
            result += (power * (columnTitle[i] - 'A' + 1));
            power *= 26;
        }

        return result;
    }
};

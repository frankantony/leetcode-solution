class Solution {
public:
    string largestOddNumber(string num) {
        int len = num.size(), i = len - 1;
        while (i >= 0 && (num[i] - '0') % 2 == 0)
            i--;
        return num.substr (0, i + 1);
    }
};

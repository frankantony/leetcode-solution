class Solution {
public:
    int removePalindromeSub(string s) {
        int len = s.size(), i = 0, j = len - 1;
        while (i < j) {
            if (s[i] != s[j])
                return 2;
            i++;
            j--;
        }
        return 1;
    }
};

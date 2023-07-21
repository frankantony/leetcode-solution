class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int count = 0, i = 0, len = s.size(), result = 0;
        for (int j = 0; j < len; j++) {
            if (j != 0 && s[j] == s[j - 1])
                count++;
            while (count >= 2) {
                count -= (s[i] == s[i + 1]);
                i++;
            }
            result = max (result, j - i + 1);
        }
        return result;
    }
};

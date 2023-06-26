class Solution {
public:
    int minimizedStringLength(string s) {
        sort(s.begin(), s.end());
        int len = s.size(), result = 1;
        for (int i = 0; i < len - 1; i++)
            if (s[i] != s[i + 1])
                result++;
        return result;
    }
};

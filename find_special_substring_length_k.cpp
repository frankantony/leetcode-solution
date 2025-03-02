class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int len = s.size();
        for (int i = 0; i <= len - k; i++) {
            int c = 0;
            for (int j = i; j < i + k - 1; j++)
                c += (s[j] == s[j+1]);

            if (c == k - 1 && (i + k == len || s[i] != s[i + k]) && (i == 0 || s[i] != s[i - 1]))
                return true;
        }

        return false;
    }
};

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int lenS = s.size(), lenT = t.size(), j = 0;

        for (int i = 0; i < lenT; i++)
            if (t[i] == s[j])
                j++;

        return j == lenS;
    }
};

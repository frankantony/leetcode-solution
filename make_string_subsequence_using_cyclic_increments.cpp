class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int c = 0, lenStr2 = str2.size(), lenStr1 = str1.size();
        for (int i = 0; i < lenStr1; i++) {
            char next = 'a' + (str1[i] - 'a' + 1) % 26;
            if (str2[c] == str1[i] || str2[c] == next)
                c++;
        }
        return c == lenStr2;
    }
};

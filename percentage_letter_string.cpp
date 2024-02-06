class Solution {
public:
    int percentageLetter(string s, char letter) {
        int len = s.size(), count = 0;
        for (int i = 0; i < len; i++)
            count += s[i] == letter;
        return (count * 100.0) / len;
    }
};

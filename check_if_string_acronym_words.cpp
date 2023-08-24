class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int lenWords = words.size(), lenS = s.size();
        if (lenWords != lenS)
            return false;
        for (int i = 0; i < lenS; i++)
            if (words[i][0] != s[i])
                return false;
        return true;
    }
};

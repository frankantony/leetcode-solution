class Solution {
public:
    bool hasMatch(string s, string p) {
        vector<string> patternWords;
        int lenP = p.size(), i = 0;
        while (p[i] != '*')
            i++;
        
        string w1 = p.substr(0, i), w2 = p.substr(i+1, lenP - i - 1);
        if (w1 != "")
            patternWords.push_back(w1);
        if (w2 != "")
            patternWords.push_back(w2);

        int c = 0, lenS = s.size(), lenPatternWords = patternWords.size();
        for (int i = 0; i < lenS && c < lenPatternWords; i++) {
            int l = patternWords[c].size();
            string x = s.substr(i, l);
            if (x == patternWords[c]) {
                c++;
                i += l - 1;
            }
        }

        return c == lenPatternWords;
    }
};

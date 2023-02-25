class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int lenS = s.size(), lenT = t.size();
        map<char, char> tableS, tableT;
        for (int i = 0; i < lenS; i++) {
            if (tableS.find(s[i]) == tableS.end() && tableT.find(t[i]) == tableT.end()) {
                tableS[s[i]] = t[i];
                tableT[t[i]] = s[i];
            }
            else if (tableS[s[i]] != t[i] || tableT[t[i]] != s[i])
                return false;
        }
        return true;
    }
};

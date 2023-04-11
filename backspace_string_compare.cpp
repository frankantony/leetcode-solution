class Solution {
public:
    string backspacing (string s) {
        string result = "";
        int len = s.size();
        if (s[0] != '#')
            result += s[0];
        for (int i = 1; i < len; i++) {
            if (s[i] == '#') {
                if (result != "")
                    result.pop_back();
            }
            else
                result += s[i];
        }
        return result;
    }

    bool backspaceCompare(string s, string t) {
        string backSpaceS = backspacing(s);
        string backSpaceT = backspacing(t);
        return backSpaceS == backSpaceT;
    }
};

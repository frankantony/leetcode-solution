class Solution {
public:
    bool divide (string s, string t) {
        string current = t;
        while (current.size() <= s.size()) {
            if (current == s)
                return true;
            current += t;
        }
        return false;
    }

    string gcdOfStrings(string str1, string str2) {
        int m = min(str1.size(), str2.size());
        string x = "", result = "";
        for (int i = 0; i < m; i++) {
            if (str1[i] != str2[i])
                break;
            x += str1[i];
            if (divide(str1, x) && divide(str2, x))
                result = x;
        }
        return result;
    }
};

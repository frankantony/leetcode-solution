class Solution {
public:
    void convertToLowercase (char &c) {
        c = (c >= 'A' && c <= 'Z') ? c - ('A' - 'a'): c;
    }

    string toLowerCase(string s) {
        int len = s.size();
        for (int i = 0; i < len; i++)
            convertToLowercase(s[i]);
        return s;
    }
};

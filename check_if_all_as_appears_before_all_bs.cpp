class Solution {
public:
    bool checkString(string s) {
        int len = s.size();
        bool findB = false;
        for (int i = 0; i < len; i++) {
            if (s[i] == 'b')
                findB = true;
            else if (findB)
                return false;
        }
        return true;
    }
};

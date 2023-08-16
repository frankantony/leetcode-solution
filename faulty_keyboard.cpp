class Solution {
public:
    string finalString(string s) {
        int len = s.size();
        string current = "";
        for (int i = 0; i < len; i++) {
            if (s[i] == 'i')
                reverse(current.begin(), current.end());
            else
                current += s[i];
        }
        return current;
    }
};

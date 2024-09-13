class Solution {
public:
    int countSegments(string s) {
        s += " ";
        int result = 0, len = s.size();
        string current = "";
        for (int i = 0; i < len; i++) {
            if (s[i] == ' ') {
                result += current.size() != 0;
                current = "";
            }
            else
                current += s[i];
        }

        return result;
    }
};

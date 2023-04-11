class Solution {
public:
    string removeDuplicates(string s) {
        int len = s.size();
        string result = "";
        result += s[0];
        for (int i = 1; i < len; i++) {
            if (s[i] == result.back())
                result.pop_back();
            else
                result += s[i];
        }
        return result;
    }
};

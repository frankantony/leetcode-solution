class Solution {
public:
    string removeStars(string s) {
        int len = s.size();
        string result = "";
        for (int i = 0; i < len; i++) {
            if (s[i] != '*')
                result += s[i];
            else
                result.pop_back();
        }
        return result;
    }
};

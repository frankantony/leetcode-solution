class Solution {
public:
    int countGoodSubstrings(string s) {
        int len = s.size(), result = 0;
        for (int i = 0; i < len - 2; i++) {
            string sub = s.substr(i, 3);
            result += (sub[0] != sub[1] && sub[1] != sub[2] && sub[0] != sub[2]);
        }
        return result;
    }
};

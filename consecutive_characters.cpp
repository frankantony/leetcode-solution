class Solution {
public:
    int maxPower(string s) {
        s += "!";
        int len = s.size(), c = 1, result = 0;
        for (int i = 0; i < len - 1; i++) {
            if (s[i] == s[i+1])
                c++;
            else {
                result = max (result, c);
                c = 1;
            }
        }
        return result;
    }
};

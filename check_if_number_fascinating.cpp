class Solution {
public:
    bool isFascinating(int n) {
        string s = to_string(n) + to_string(2 * n) + to_string(3 * n);
        vector<bool> digits (10, 0);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0' || digits[s[i] - '0'])
                return false;
            digits[s[i] - '0'] = true;
        }
        return true;
    }
};

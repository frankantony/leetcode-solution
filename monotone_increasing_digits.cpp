class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);
        int len = s.size(), i = 0;
        vector<bool> changed(len, false);
        while (i < len - 1) {
            if (s[i] > s[i + 1]) {
                s[i] = (!changed[i]) ? s[i] - 1: s[i];
                s[i+1] = '9';
                changed[i] = true;
                changed[i + 1] = true;
                i = (i != 0) ? i-1: 0;
            }
            else
                i++;
        }

        return stoi(s);
    }
};

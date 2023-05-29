class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int len = s.size(), a = 0, b = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] == '1')
                a++;
            else
                b++;
            b = min (a, b);
        }
        return b;
    }
};

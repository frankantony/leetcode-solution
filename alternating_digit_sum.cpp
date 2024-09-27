class Solution {
public:
    int alternateDigitSum(int n) {
        string x = to_string(n);
        int len = x.size(), result = 0, cof = 1;
        for (int i = 0; i < len; i++) {
            result += cof * (x[i] - '0');
            cof = -cof;
        }

        return result;
    }
};

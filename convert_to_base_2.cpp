class Solution {
public:
    string baseNeg2(int n) {
        string result = "";
        if (n == 0)
            result = "0";
        while (n != 0) {
            int rest = (n % (-2));
            if (rest < 0) {
                rest = rest + 2;
                n = (rest - n) / 2;
            }
            else
                n /= (-2);
            result += rest + '0';
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

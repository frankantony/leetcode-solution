class Solution {
public:
    int integerBreak(int n) {
        if (n <= 3) return n - 1;

        int number_of_3 = n / 3;
        int rest = n % 3;
        if (rest == 0)
            return pow (3, number_of_3);
        else if (rest == 1)
            return pow (3, number_of_3 - 1) * 4;
        return pow (3, number_of_3) * 2;
    }
};

class Solution {
public:
    double pot (double x, int n) {
        if (n == 0) return 1;
        double value = pot (x, n/2);
        if (n % 2 == 0)
            return value * value;
        else {
            if (n < 0)
                return value * value * (1.0 / x);
            return value * value * x;
        }
    }

    double myPow(double x, int n) {
        return pot(x, n);
    }
};

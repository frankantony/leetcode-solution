class Solution {
public:
    int gcd (int a, int b) {
        if (b == 0)
            return a;
        return gcd (b, a % b);
    }

    long long numTrees(int n) {
        long long x = 1, y = 1;
        for (int k = 2; k <= n; k++) {
            int g = gcd (x, y);
            if (g != 1) {
                x /= g;
                y /= g;
            }
            x *= (n + k);
            y *= k;
        }

        return x / y;
    }
};

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
            return false;
        double value = n;
        while (value >= 3)
            value /= 3;

        return value == 1;
    }
};

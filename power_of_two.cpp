class Solution {
public:
    bool isPowerOfTwo(long long n) {
        if (n <= 0)
            return false;
        double value = log2(n);
        double fraction = value - (int) value;
        return fraction == 0;
    }
};

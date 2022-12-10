class Solution {
public:

    int trailingZeroes(int n) {
        int result = 0, pot = 5;
        while (pot <= n) {
            result += (n/pot);
            pot *= 5;
        }
        return result;
    }
};

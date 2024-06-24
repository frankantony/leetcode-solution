class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = 0;
        while (x != 0 || y != 0) {
            int digitX = x % 2, digitY = y % 2;
            result += digitX != digitY;
            x /= 2;
            y /= 2;
        }

        return result;
    }
};

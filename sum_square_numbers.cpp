class Solution {
public:
    bool judgeSquareSum(int c) {
        long i = 0, j = sqrt(c);
        while (i <= j) {
            long sum = i * i + j * j;
            if (sum == c)
                return true;
            else if (sum < c)
                i++;
            else
                j--;
        }
        return false;
    }
};

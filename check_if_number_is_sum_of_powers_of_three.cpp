class Solution {
public:
    bool checkPowersOfThree(int n) {
        int m = log (n)/log(3), sum = 0;
        for (int i = m; i >= 0; i--) {
            int y = pow (3, i);
            if (sum + y > n)
                continue;
            sum += y;
            if (sum == n)
                return true;
        }
        return false;
    }
};

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;
        int i = 2;
        while (n != 1) {
            if (n % i == 0) {
                n /= i;
                if (i != 2 && i != 3 && i != 5)
                    return false;
            }
            else
                i++;
            if (i > 5)
                return false;
        }
        return true;
    }
};

class Solution {
public:
    int sumOfMultiples(int n) {
        int result = 0;
        for (int i = 3; i <= n; i += 3)
            result += i;
        for (int i = 5; i <= n; i += 5) {
            if (i % 3 != 0)
                result += i;
        }
        for (int i = 7; i <= n; i += 7) {
            if (i % 3 != 0 && i % 5 != 0)
                result += i;
        }
        return result;
    }
};

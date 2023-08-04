class Solution {
public:
    int nthUglyNumber(int n) {
        int a = 1, b = 1, c = 1;
        int next_multiple_2 = 2, next_multiple_3 = 3, next_multiple_5 = 5;
        vector<int> ugly(n, 1);
        for (int i = 1; i < n; i++) {
            int value = min (next_multiple_2, min(next_multiple_3, next_multiple_5));
            ugly[i] = value;
            if (value == next_multiple_2)
                next_multiple_2 = ugly[a++] * 2;
            if (value == next_multiple_3)
                next_multiple_3 = ugly[b++] * 3;
            if (value == next_multiple_5)
                next_multiple_5 = ugly[c++] * 5;
        }

        return ugly[n - 1];
    }
};

class Solution {
public:
    int countTriples(int n) {
        map<int, bool> perfectSquare;
        for (int i = 1; i <= 354; i++)
            perfectSquare[i * i] = true;
        int result = 0;
        for (int a = 1; a <= n; a++) {
            for (int b = 1; b <= n; b++) {
                int value = a * a + b * b;
                if (perfectSquare[value] && sqrt (value) <= n)
                    result++;
            }
        }
        return result;
    }
};

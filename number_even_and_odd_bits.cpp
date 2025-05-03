class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0, odd = 0, c = 0;
        while (n) {
            even += (c % 2 == 0) && (n % 2) == 1;
            odd += (c % 2 != 0) && (n % 2) == 1;
            n /= 2;
            c++;
        }
        return {even, odd};
    }
};

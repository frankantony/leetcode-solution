class Solution {
public:
    int findComplement(int num) {
        int result = 0;
        long long pot = 1;
        while (num != 0) {
            int complement = !(num % 2);
            result += (complement * pot);
            pot *= 2;
            num /= 2;
        }

        return result;
    }
};

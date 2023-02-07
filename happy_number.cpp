class Solution {
public:
    bool isHappy(int n) {
        int sum;
        map <int, bool> table;
        table[n] = true;
        while (true) {
            sum = 0;
            while (n != 0) {
                int number = n % 10;
                sum += (number * number);
                n /= 10;
            }

            n = sum;
            if (n == 1)
                return true;
            else if (table[n])
                return false;
            table[n] = true;
        }
        return false;
    }
};

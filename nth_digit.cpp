class Solution {
public:
    int findNthDigit(int n) {
        long i = 1, power = 1;
        while (n >= 9) {
            if (n > (9 * power * i))
                n -= (9 * power * i);
            else
                break;
            i++;
            power *= 10;
        }
               
        int number = (n / i) + power, index = n % i;

        string s = to_string(number);
        if (index != 0)
            return s[index - 1] - '0';
        else
            return (number - 1) % 10;
    }
};

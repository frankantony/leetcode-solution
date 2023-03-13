class Solution {
public:
    int sum_digits (int num) {
        int sum = 0;
        while (num != 0) {
            sum += (num % 10);
            num /= 10;
        }
        return sum;
    }

    int countEven (int num) {
        int i = 1, result = 0;
        while (i <= num) {
            int sum = sum_digits(i);
            if (sum % 2 == 0)
                result++;
            i++;
        }

        return result;
    }
};

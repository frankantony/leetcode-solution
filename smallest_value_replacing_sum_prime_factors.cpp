class Solution {
public:
    int getSum (int n) {
        int sum = 0, i = 2, aux = n;
        while (aux != 1) {
            if (aux % i == 0) {
                sum += i;
                aux /= i;
            }
            else
                i++;
        }
        return sum;
    }

    int smallestValue(int n) {
        int result = 0;
        while (n != 1) {
            int sum = getSum (n);
            if (n == sum)
                break;
            n = sum;
        }
        return n;
    }
};

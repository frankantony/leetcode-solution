class Solution {
public:
    bool isSymmetric (int n) {
        vector<int> digits;
        int value = n;
        while (value != 0) {
            digits.push_back(value % 10);
            value /= 10;
        }
        int len = digits.size();
        if (len % 2 != 0)
            return false;
        int sumFirst = 0, sumLast = 0;
        for (int i = 0; i < len / 2; i++)
            sumFirst += digits[i];
        for (int i = len - 1; i >= len / 2; i--)
            sumLast += digits[i];
        return sumFirst == sumLast;
    }

    int countSymmetricIntegers(int low, int high) {
        int result = 0;
        for (int i = low; i <= high; i++)
            result += isSymmetric (i);
        return result;
    }
};

class Solution {
public:
    int numberOfSteps(int num) {
        int result = 0;
        while (num != 0) {
            result++;
            if (num % 2 == 0)
                num /= 2;
            else
                num--;
        }
        return result;
    }
};

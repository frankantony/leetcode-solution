class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        for (long long x = (num - 3) / 3; x <= num / 3; x++)
            if (3 * x + 3 == num)
                return {x, x + 1, x + 2};
        return {};
    }
};

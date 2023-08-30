class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long result = 1;
        int c = 1, i = 2;
        map<int, bool> table;
        table[1] = true;
        while (c < n) {
            if (!table[target - i]) {
                table[i] = true;
                result += i;
                c++;
            }
            i++;
        }
        return result;
    }
};

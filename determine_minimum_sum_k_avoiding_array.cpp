class Solution {
public:
    int minimumSum(int n, int k) {
        int count = 1, i = 2, result = 1;
        map<int, bool> table;
        table[1] = true;
        while (count < n) {
            if (!table[k - i]) {
                table[i] = true;
                result += i;
                count++;
            }
            i++;
        }
        return result;
    }
};

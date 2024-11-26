class Solution {
public:
    int update (int x, int len, int k) {
        if (k > 0)
            return (x == len - 1) ? 0: x + 1;
        else
            return (x == 0) ? len - 1: x - 1;
    }

    vector<int> decrypt(vector<int>& code, int k) {
        int len = code.size();
        vector<int> result;
        for (int i = 0; i < len; i++) {
            int sum = 0, c = 0;
            int j = i;
            j = update (j, len, k);
            while (c < abs(k)) {
                sum += code[j];
                j = update (j, len, k);
                c++;
            }

            result.push_back(sum);
        }
        return result;
    }
};

class Solution {
public:
    int mod (int p, int q, int k) {
        int prod = 1, c = 1;
        while (c <= q) {
            prod *= p;
            prod %= k;
            c++;
        }
        return prod;
    }

    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> result;
        int len = variables.size();
        for (int i = 0; i < len; i++) {
            int a = variables[i][0];
            int b = variables[i][1];
            int c = variables[i][2];
            int m = variables[i][3];
            int x = mod (a, b, 10);
            int v = mod (x, c, m);
            if (v == target)
                result.push_back(i);
        }
        return result;
    }
};

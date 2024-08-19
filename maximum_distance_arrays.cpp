class Solution {
public:
    static bool cmp1 (vector<int>& x, vector<int>& y) {
        int lenX = x.size(), lenY = y.size();
        int lastX = x[lenX-1], lastY = y[lenY-1];
        if (lastX == lastY)
            return x[0] > y[0];
        return lastX > lastY;
    }

    static bool cmp2 (vector<int>& x, vector<int>& y) {
        int lenX = x.size(), lenY = y.size();
        int lastX = x[lenX-1], lastY = y[lenY-1];
        if (x[0] == y[0])
            return lastX < lastY;
        return x[0] < y[0];
    }

    int solve (vector<vector<int>>& arrays, int flag) {
        int len = arrays.size(), maximum, minimum;
        if (flag == 1) {
            sort(arrays.begin(), arrays.end(), cmp1);
            int l = arrays[0].size();
            maximum = arrays[0][l-1];
            minimum = INT_MAX;

            for (int i = 1; i < len; i++)
                minimum = min(minimum, arrays[i][0]);
        }
        else {
            sort(arrays.begin(), arrays.end(), cmp2);
            minimum = arrays[0][0];
            maximum = INT_MIN;

            int len = arrays.size();
            for (int i = 1; i < len; i++) {
                int l = arrays[i].size();
                maximum = max(maximum, arrays[i][l-1]);
            }
        }

        return maximum - minimum;
    }

    int maxDistance(vector<vector<int>>& arrays) {
        int x = solve (arrays, 1), y = solve (arrays, 0);
        int result = max (x, y);
        return result;
    }
};

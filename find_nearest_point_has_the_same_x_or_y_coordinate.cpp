class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int len = points.size(), minimumDistance = INT_MAX, result = -1;
        for (int i = 0; i < len; i++) {
            if (x == points[i][0] || y == points[i][1]) {
                int distance = abs (x - points[i][0]) + abs (y - points[i][1]);
                if (distance < minimumDistance) {
                    result = i;
                    minimumDistance = distance;
                }
            }
        }
        return result;
    }
};

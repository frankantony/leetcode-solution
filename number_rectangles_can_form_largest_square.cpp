class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxLen = 0, len = rectangles.size();
        for (int i = 0; i < len; i++)
            maxLen = max (maxLen, min (rectangles[i][0], rectangles[i][1]));
        int result = 0;
        for (int i = 0; i < len; i++) {
            int m = min (rectangles[i][0], rectangles[i][1]);
            result += m == maxLen;
        }
        return result;
    }
};

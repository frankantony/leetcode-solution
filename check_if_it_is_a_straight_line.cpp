class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int len = coordinates.size();
        int deltaX = coordinates[1][0] - coordinates[0][0];
        int deltaY = coordinates[1][1] - coordinates[0][1];
        for (int i = 1; i < len - 1; i++) {
            int deltaCurrentX = coordinates[i + 1][0] - coordinates[i][0];
            int deltaCurrentY = coordinates[i + 1][1] - coordinates[i][1];
            if (deltaX * deltaCurrentY != deltaY * deltaCurrentX)
                return false;
            deltaX = coordinates[i + 1][0] - coordinates[i][0];
            deltaY = coordinates[i + 1][1] - coordinates[i][1];
        }
        return true;
    }
};

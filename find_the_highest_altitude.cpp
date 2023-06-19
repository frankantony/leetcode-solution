class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0, highest = 0, len = gain.size();
        for (int i = 0;i < len; i++) {
            altitude += gain[i];
            highest = max (highest, altitude);
        }
        return highest;
    }
};

class Solution {
public:
    bool isAlmostEqual (int x, int y) {
        string sX = to_string(x), sY = to_string(y);
        int lenX = sX.size(), lenY = sY.size();
        int i = lenX - 1, j = lenY - 1;
        vector<int> differs;
        while (i >= 0 || j >= 0) {
            int a = (i == -1) ? '0' : sX[i];
            int b = (j == -1) ? '0' : sY[j];
            if (a != b) {
                differs.push_back(a);
                differs.push_back(b);
            }

            i = (i != -1) ? i - 1: i;
            j = (j != -1) ? j - 1: j;
        }

        int lenDiffers = differs.size();
        return (lenDiffers == 4 && differs[0] == differs[3] && differs[1] == differs[2]) || lenDiffers == 0;
    }

    int countPairs(vector<int>& nums) {
        int result = 0, len = nums.size();
        for (int i = 0; i < len; i++) {
            for (int j = i+1; j < len; j++) {
                bool r = isAlmostEqual(nums[i], nums[j]);
                result += r;
            }
        }
        return result;
    }
};

class Solution {
public:
    int calculateHeight (int red, int blue, int flag) {
        int color = flag, k = 1, sumRed = 0, sumBlue = 0;
        while (true) {
            if (color == 1)
                sumBlue += k;
            else
                sumRed += k;

            if (sumRed > red || sumBlue > blue) break;
            color = -color;
            k++;
        }

        return k - 1;
    }

    int maxHeightOfTriangle(int red, int blue) {
        int blueFirst = calculateHeight (red, blue, 1), redFirst = calculateHeight (red, blue, -1);
        int result = max (blueFirst, redFirst);
        return result;
    }
};

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int widthFirstRectangle = (ax2 - ax1);
        int heightFirstRectangle = (ay2 - ay1);

        int widthSecondRectangle = (bx2 - bx1);
        int heightSecondRectangle = (by2 - by1);

        int widthIntersectionRectangle = min(ay2, by2) - max(ay1, by1);
        int heightIntersectionRectangle = min(ax2, bx2) - max(ax1, bx1);
        int areaIntersectionRectangle;

        if (widthIntersectionRectangle < 0 || heightIntersectionRectangle < 0)
            areaIntersectionRectangle = 0;
        else
            areaIntersectionRectangle = widthIntersectionRectangle * heightIntersectionRectangle;

        int areaFirstRectangle = widthFirstRectangle * heightFirstRectangle;
        int areaSecondRectangle = widthSecondRectangle * heightSecondRectangle;

        return areaFirstRectangle + areaSecondRectangle - areaIntersectionRectangle;
    }
};

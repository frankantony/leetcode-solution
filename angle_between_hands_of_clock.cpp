class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour = (hour % 12);
        double anglePointerMinute = minutes * 6;
        double anglePointerHour = (hour * 30) + (anglePointerMinute / 12);
        double angleBetweenTwoPointers = abs(anglePointerMinute - anglePointerHour);
        return min (angleBetweenTwoPointers, 360 - angleBetweenTwoPointers);
    }
};

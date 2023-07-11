class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int result = 0;
        while (mainTank >= 5) {
            result += 50;
            mainTank = mainTank - 5 + (additionalTank > 0);
            additionalTank--;
        }
        result += mainTank * 10;
        return result;
    }
};

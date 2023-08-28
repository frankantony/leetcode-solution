class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int dividend = purchaseAmount / 10;
        int x = purchaseAmount - dividend * 10, y = (dividend + 1) * 10 - purchaseAmount;
        if (x >= y)
            return 100 - 10 * (dividend + 1);
        else
            return 100 - 10 * dividend;
    }
};

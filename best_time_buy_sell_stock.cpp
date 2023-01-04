class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0, minimum = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            minimum = min(minimum, prices[i]);
            result = max (result, prices[i]- minimum);
        }
        return result;
    }
};

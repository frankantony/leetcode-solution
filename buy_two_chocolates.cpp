class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort (prices.begin(), prices.end());
        int remainMoney = money - prices[0] - prices[1];
        if (remainMoney < 0)
            return money;
        return remainMoney;
    }
};

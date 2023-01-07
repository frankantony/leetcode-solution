class Solution {
public:
    int maxProfit(vector<int>& prices) {
        prices.push_back(-1);
        int len = prices.size(), x = 0, y = 0, result = 0;
        bool increase = false;
        for (int i = 0; i < len-1; i++) {
            if (prices[i] <= prices[i+1]) {
                if (!increase) {
                    x = prices[i];
                    y = prices[i + 1];
                    increase = true;
                }
                else
                    y = prices[i+1];
            }
            else {
                if (increase)
                    result += abs(x - y);
                increase = false;
            }
        }

        return result;
    }
};

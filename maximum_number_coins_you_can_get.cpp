class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort (piles.begin(), piles.end());
        int len = piles.size(), result = 0, cont = 1, i = len - 2;
        while (cont <= len / 3) {
            result += piles[i];
            i -= 2;
            cont++;
        }
        return result;
    }
};

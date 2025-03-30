class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int len = fruits.size();
        vector<bool> usedBaskets(len, false);
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                if (!usedBaskets[j])
                    if (baskets[j] >= fruits[i]) {
                        usedBaskets[j] = true;
                        break;
                    }
            }
        }
        
        int result = 0;
        for (int i = 0; i < len; i++)
            result += !usedBaskets[i];
        return result;
    }
};

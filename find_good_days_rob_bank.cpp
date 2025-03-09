class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int len = security.size();
        vector<int> countBeforeDec(len, 0);
        int c = 0;
        for (int i = 1; i < len; i++) {
            if (security[i] <= security[i-1])
                c++;
            else
                c = 0;
            countBeforeDec[i] = c;
        }

        vector<int> countAfterInc(len, 0);
        c = 0;
        for (int i = len - 2; i >= 0; i--) {
            if (security[i] <= security[i+1])
                c++;
            else
                c = 0;
            countAfterInc[i] = c;
        }

        vector<int> result;
        for (int i = 0; i < len; i++) {
            if (countBeforeDec[i] >= time && countAfterInc[i] >= time)
                result.push_back(i);
        }

        return result;
    }
};

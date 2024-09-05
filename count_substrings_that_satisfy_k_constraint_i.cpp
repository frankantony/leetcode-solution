class Solution {
public:
    bool isContraint (string x, int k) {
        int countOne = 0, countZeroes = 0, len = x.size();
        for (int i = 0; i < len; i++) {
            countOne += (x[i] == '1');
            countZeroes += (x[i] == '0');
        }
        return countOne <= k || countZeroes <= k;
    }

    int countKConstraintSubstrings(string s, int k) {
        int len = s.size(), result = 0;
        for (int i = 0; i < len; i++) {
            for (int j = i; j < len; j++) {
                string a = s.substr(i, j-i+1);
                if (isContraint (a, k))
                    result++;
            }
        }
        return result;
    }
};

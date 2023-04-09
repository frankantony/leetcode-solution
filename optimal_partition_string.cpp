class Solution {
public:
    int partitionString(string s) {
        vector<int> frequence(26, 0);
        int len = s.size(), result = 1;
        for (int i = 0; i < len; i++) {
            int index = s[i] - 'a';
            if (frequence[index] != 0) {
                fill (frequence.begin(), frequence.end(), 0);
                result++;
                i--;
            }
            else
                frequence[index]++;
        }
        return result;
    }
};

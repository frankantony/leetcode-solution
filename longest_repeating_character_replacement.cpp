class Solution {
public:
    int characterReplacement(string s, int k) {
        int len = s.size(), i = 0, result = 0, maxLenRepeat = 0;
        vector<int> frequence(26, 0);
        for (int j = 0; j < len; j++) {
            char c = s[j];
            frequence[c - 'A']++;
            maxLenRepeat = max (maxLenRepeat, frequence[c - 'A']);
            if (j - i + 1 - maxLenRepeat > k) {
                frequence[s[i] - 'A']--;
                i++;
            }
            result = max (result, j - i + 1);
        }
        return result;
    }
};

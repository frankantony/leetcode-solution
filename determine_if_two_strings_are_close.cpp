class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int lenWord1 = word1.size(), lenWord2 = word2.size();
        vector<int> frequenceWord1(26, 0), frequenceWord2(26, 0);
        for (int i = 0; i < lenWord1; i++)
            frequenceWord1[word1[i] - 'a']++;
        for (int i = 0; i < lenWord2; i++)
            frequenceWord2[word2[i] - 'a']++;
        for (int i = 0; i < 26; i++)
            if ((frequenceWord1[i] != 0) != (frequenceWord2[i] != 0))
                return false;
        sort (frequenceWord1.begin(), frequenceWord1.end());
        sort (frequenceWord2.begin(), frequenceWord2.end());
        for (int i = 0; i < 26; i++)
            if (frequenceWord1[i] != frequenceWord2[i])
                return false;
        return true;
    }
};

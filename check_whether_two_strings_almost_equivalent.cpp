class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<int, int> frequence1, frequence2;
        int len = word1.size();
        for (int i = 0; i < len; i++) {
            frequence1[word1[i]]++;
            frequence2[word2[i]]++;
        }

        for (int i = 0; i < 26; i++)
            if (abs(frequence1[i + 'a'] - frequence2[i + 'a']) > 3)
                return false;
        return true;
    }
};

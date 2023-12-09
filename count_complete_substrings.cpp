class Solution {
public:
    int countCompleteSubstrings(string word, int k) {
        int result = 0;
        for (int c = 1; c <= 26; c++) {
            vector<int> frequence (26, 0);
            int numberOfCharectersWithFrequenceK = 0, i = 0;
            for (int j = 0; j < word.size(); j++) {
                if (j != 0 && abs(word[j] - word[j-1]) > 2) {
                    fill (frequence.begin(), frequence.end(), 0);
                    numberOfCharectersWithFrequenceK = 0;
                    i = j;
                }

                int f = ++frequence[word[j] - 'a'];
                numberOfCharectersWithFrequenceK += (f == k) ? 1: (f == k + 1) ? -1: 0;
                if (j - i + 1 >= c * k) {
                    if (j - i + 1 > c * k) {
                        f = --frequence[word[i++] - 'a'];
                        numberOfCharectersWithFrequenceK += (f == k) ? 1: (f == k - 1) ? -1: 0;
                    }
                    result += numberOfCharectersWithFrequenceK == c;
                }
            }
        }
        return result;
    }
};

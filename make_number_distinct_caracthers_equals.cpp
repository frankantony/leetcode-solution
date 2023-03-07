class Solution {
public:
    bool isItPossible(string word1, string word2) {
        vector<int> frequenceWord1(26), frequenceWord2(26);
        int distinctWord1 = 0, distinctWord2 = 0;
        for (int i = 0; i < word1.size(); i++) {
            if (frequenceWord1[word1[i] - 'a'] == 0)
                distinctWord1++;
            frequenceWord1[word1[i] - 'a']++;
        }

        for (int i = 0; i < word2.size(); i++) {
            if (frequenceWord2[word2[i] - 'a'] == 0)
                distinctWord2++;
            frequenceWord2[word2[i] - 'a']++;
        }
        
        for (char c = 'a'; c <= 'z'; c++) {
            for (char d = 'a'; d <= 'z'; d++) {
                if (frequenceWord1[c - 'a'] != 0 && frequenceWord2[d - 'a'] != 0) {
                    int count1 = 0, count2 = 0;
                    if (frequenceWord1[c - 'a'] == 1)
                        count1--;
                    frequenceWord1[c - 'a']--;

                    if (frequenceWord2[c - 'a'] == 0)
                        count2++;
                    frequenceWord2[c - 'a']++;

                    if (frequenceWord1[d - 'a'] == 0)
                        count1++;
                    frequenceWord1[d - 'a']++;

                    if (frequenceWord2[d - 'a'] == 1)
                        count2--;
                    frequenceWord2[d - 'a']--;
                    
                    if (distinctWord1 + count1 == distinctWord2 + count2)
                        return true;
                    
                    frequenceWord1[c - 'a']++;
                    frequenceWord2[c - 'a']--;
                    frequenceWord1[d - 'a']--;
                    frequenceWord2[d - 'a']++;

                }
            }
        }

        return false;
    }
};

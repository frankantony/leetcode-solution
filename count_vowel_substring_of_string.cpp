class Solution {
public:
    bool isVowel (char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int countVowelSubstrings(string word) {
        int len = word.size(), result = 0;
        for (int i = 0; i < len; i++) {
            set<char> vowels;
            int distinctVowel = 0, j = i;
            while (j < len && isVowel (word[j])) {
                vowels.insert(word[j]);
                int lenVowels = vowels.size();
                result += (lenVowels == 5);
                j++;
            }
        }

        return result;
    }
};

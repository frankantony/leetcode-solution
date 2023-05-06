class Solution {
public:
    bool isVowel (char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int vowels = 0;
        for (int i = 0; i < k; i++)
            if (isVowel (s[i]))
                vowels++;
        int len = s.size(), result = vowels;
        for (int i = k; i < len; i++) {
            if (isVowel (s[i-k]) != isVowel (s[i])) {
                if (isVowel (s[i]))
                    vowels++;
                else
                    vowels--;
            }
            result = max (result, vowels);
        }
        return result;
    }
};

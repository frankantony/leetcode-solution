class Solution {
public:
    bool isVowel (char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            || (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    string reverseVowels(string s) {
        string vowels = "";
        int len = s.size();
        for (int i = 0; i < len; i++)
            if (isVowel(s[i]))
                vowels += s[i];
        
        int p = vowels.size() - 1;
        for (int i = 0; i < len; i++) {
            if (isVowel(s[i]))
                s[i] = vowels[p--];
        }

        return s;
    }
};

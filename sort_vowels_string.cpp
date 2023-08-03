class Solution {
public:
    bool isVowel (char c) {
        return c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' ||
                c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U';
    }

    string sortVowels(string s) {
        vector<char> vowels;
        int len = s.size();
        for (int i = 0; i < len; i++)
            if (isVowel(s[i]))
                vowels.push_back(s[i]);
        
        sort(vowels.begin(), vowels.end());
        int c = 0;
        for (int i = 0; i < len; i++)
            if (isVowel(s[i]))
                s[i] = vowels[c++];
        return s;
    }
};

class Solution {
public:
    bool isLetter (char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }

    string reverseOnlyLetters(string s) {
        int len = s.size();
        string letters = "";
        for (int i = 0; i < len; i++) {
            char c = s[i];
            if (isLetter(c))
                letters += c;
        }
        
        int lenLetters = letters.size(), j = lenLetters - 1;
        string result = "";
        for (int i = 0; i < len; i++) {
            char c = s[i];
            if (isLetter(c))
                result += letters[j--];
            else
                result += c;
        }
        return result;
    }
};

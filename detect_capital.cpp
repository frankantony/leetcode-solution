class Solution {
public:
    bool detectCapitalUse(string word) {
        int lettersCapital = 0, len = word.size();
        for (int i = 0; i < len; i++)
            lettersCapital += (word[i] >= 'A' && word[i] <= 'Z');
        return (lettersCapital == len) || (lettersCapital == 0) || 
                (word[0] >= 'A' && word[0] <= 'Z' && lettersCapital == 1);
    }
};

class Solution {
public:
    int numberOfSpecialChars(string word) {
        int len = word.size();
        map<int, int> table;
        for (int i = 0; i < len; i++)
            table[word[i]] = true;
        
        int result = 0;
        for (char c = 'a'; c <= 'z'; c++)
            result += (table[c] && table[c + ('A' - 'a')]);
        return result;
    }
};

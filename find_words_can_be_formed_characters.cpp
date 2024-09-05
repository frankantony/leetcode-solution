class Solution {
public:
    bool isGood (string word, vector<int> frequenceChars) {
        int len = word.size();
        vector<int> frequenceWord(26, 0);
        for (int i = 0; i < len; i++)
            frequenceWord[word[i] - 'a']++;

        for (int i = 0; i < len; i++)
            if (frequenceWord[word[i] - 'a'] > frequenceChars[word[i] - 'a'])
                return false;
        return true;
    }

    int countCharacters(vector<string>& words, string chars) {
        int lenChars = chars.size();
        vector<int> frequenceChars(26, 0);
        for (int i = 0; i < lenChars; i++)
            frequenceChars[chars[i] - 'a']++;
        
        int len = words.size(), result = 0;
        for (int i = 0; i < len; i++) {
            if (isGood(words[i], frequenceChars))
                result += words[i].size();
        }
        return result;
    }
};

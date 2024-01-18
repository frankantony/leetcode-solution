class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        sentence += " ";
        int lenSetence = sentence.size(), index = 1, lenSearchWord = searchWord.size();
        string word = "";
        for (int i = 0; i < lenSetence; i++) {
            if (sentence[i] != ' ')
                word += sentence[i];
            else {
                if (word.substr(0, lenSearchWord) == searchWord)
                    return index;
                word = "";
                index++;
            }
        }
        return -1;
    }
};

class Solution {
public:
    vector<string> split (string s, char c) {
        vector<string> result;
        string current = "";
        s += " ";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != c) {
                current += s[i];
            }
            else {
                result.push_back(current);
                current = "";
            }
        }
        return result;
    }

    bool wordPattern(string pattern, string s) {
        map<char, string> tablePattern;
        map<string, char> tableWord;
        vector<string> words = split (s, ' ');
        int lenWord = words.size(), lenPattern = pattern.size();
        for (int i = 0; i < lenWord; i++) {
            if (tablePattern.find(pattern[i]) == tablePattern.end() 
                && tableWord.find(words[i]) == tableWord.end()) {
                tablePattern[pattern[i]] = words[i];
                tableWord[words[i]] = pattern[i];
            }

            else if (words[i] != tablePattern[pattern[i]] &&
                    tableWord[words[i]] != pattern[i])
                return false;
        }

        return lenWord == lenPattern;
    }
};

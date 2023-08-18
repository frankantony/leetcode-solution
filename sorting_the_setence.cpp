class Solution {
public:
    vector<string> split (string s) {
        int len = s.size();
        vector<string> result;
        string current = "";
        for (int i = 0; i < len; i++) {
            if (s[i] == ' ') {
                result.push_back(current);
                current = "";
            }
            else
                current += s[i];
        }

        if (current != "")
            result.push_back(current);
        return result;
    }

    string sortSentence(string s) {
        vector<string> words = split (s);
        int lenWords = words.size();
        vector<string> wordWithoutIndex(lenWords);
        for (int i = 0; i < lenWords; i++) {
            int len = words[i].size();
            char last = words[i].back();
            wordWithoutIndex[last - 1 - '0'] = words[i].substr(0, len - 1);
        }

        string result = wordWithoutIndex[0];
        for (int i = 1; i < lenWords; i++) {
            result += " " + wordWithoutIndex[i];
        }

        return result;
    }
};

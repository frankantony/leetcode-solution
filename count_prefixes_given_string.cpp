class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int len = s.size();
        string current = "";
        map<string, bool> prefix;
        for (int i = 0; i < len; i++) {
            current += s[i];
            prefix[current] = true;
        }
        int lenWord = words.size(), result = 0;
        for (int i = 0; i < lenWord; i++)
            if (prefix.find(words[i]) != prefix.end())
                result++;
        return result;
    }
};

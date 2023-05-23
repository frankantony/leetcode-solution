class Solution {
public:
    bool isPrefix (string word, string prefix) {
        int i = 0, len = prefix.size();
        while (i < len) {
            if (prefix[i] != word[i])
                return false;
            i++;
        }
        return true;
    }

    int prefixCount(vector<string>& words, string pref) {
        int len = words.size(), result = 0;
        for (int i = 0; i < len; i++)
            if (isPrefix(words[i], pref))
                result++;
        return result;
    }
};

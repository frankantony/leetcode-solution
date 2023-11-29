class Solution {
public:
    bool containLetter (string s, char l) {
        int len = s.size();
        for (int i = 0; i < len; i++)
            if (s[i] == l)
                return true;
        return false;
    }

    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        int len = words.size();
        for (int i = 0; i < len; i++)
            if (containLetter (words[i], x))
                result.push_back(i);
        return result;
    }
};

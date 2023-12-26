class Solution {
public:
    bool verify (string s, string word) {
        vector<pair<char, int>> vet;
        int len = s.size(), count = 1;
        s += "@";
        for (int i = 0; i < len; i++) {
            if (s[i] == s[i + 1])
                count++;
            else {
                vet.push_back({s[i], count});
                count = 1;
            }
        }
        int lenWord = word.size(), lenVet = vet.size(), c = 0;
        word += "@";
        count = 1;
        
        for (int i = 0; i < lenWord; i++) {
            if (word[i] == word[i + 1])
                count++;
            else {
                if (c == lenVet)
                    return false;
                pair<char, int> p = vet[c++];
                if (p.first != word[i] || (p.second < 3 && p.second != count) || (p.second < count)) 
                    return false;
                count = 1;
            }
        }

        return c == lenVet;
    }

    int expressiveWords(string s, vector<string>& words) {
        int lenWords = words.size(), result = 0;
        for (int i = 0; i < lenWords; i++)
            result += verify(s, words[i]);

        return result;
    }
};

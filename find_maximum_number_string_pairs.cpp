class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        map<string, bool> contain;
        int len = words.size(), result = 0;
        for (int i = 0; i < len; i++)
            contain[words[i]] = true;
        for (int i = 0; i < len; i++) {
            contain[words[i]] = false;
            reverse(words[i].begin(), words[i].end());
            if (contain[words[i]])
                result++;
        }
        return result;
    }
};

class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int len = s.size(), result = 0;
        map<string, int> substrCount;
        for (int i = 0; i <= len - minSize; i++)
            substrCount[s.substr(i, minSize)]++;
        
        for (map<string, int>::iterator it = substrCount.begin(); it != substrCount.end(); ++it) {
            string str = it->first;
            set<char> distinct(str.begin(), str.end());
            if (distinct.size() <= maxLetters)
                result = max(result, it->second);
        }

        return result;
    }
};

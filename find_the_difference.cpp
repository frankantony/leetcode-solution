class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> frequenceS(26, 0), frequenceT(26, 0);
        int len = s.size();
        for (int i = 0; i < len; i++) {
            frequenceS[s[i] - 'a']++;
            frequenceT[t[i] - 'a']++;
        }

        frequenceT[t[len] - 'a']++;
        char result;
        for (int i = 0; i < 26; i++)
            if (frequenceS[i] != frequenceT[i])
                result = i + 'a';
            
        return result;
    }
};

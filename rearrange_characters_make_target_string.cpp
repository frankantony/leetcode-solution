class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> countS (26, 0);
        int lenS = s.size(), lenTarget = target.size();
        for (int i = 0; i < lenS; i++)
            countS[s[i] - 'a']++;
        
        vector<int> countTarget (26,0);
        for (int i = 0; i < lenTarget; i++)
            countTarget[target[i] - 'a']++;
        
        int result = INT_MAX;
        for (int i = 0; i < lenTarget; i++)
            result = min(result, countS[target[i] - 'a'] / countTarget[target[i] - 'a']);

        return result;
    }
};

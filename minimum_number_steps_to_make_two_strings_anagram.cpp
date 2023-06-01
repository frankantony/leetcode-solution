class Solution {
public:
    int minSteps(string s, string t) {
        int lenS = s.size();
        map<int, int> frequenceS, frequenceT;
        for (int i = 0; i < lenS; i++) {
            frequenceS[s[i]]++;
            frequenceT[t[i]]++;
        }
        int result = 0;
        for (char c = 'a'; c <= 'z'; c++) {
            int diff = frequenceT[c] - frequenceS[c];
            if (diff > 0)
                result += diff;
        }
        return result;
    }
};

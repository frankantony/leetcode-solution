class Solution {
public:
    static bool cmp (int x, int y) {
        return x > y;
    }

    int minDeletions(string s) {
        vector<int> frequence(26, 0);
        int len = s.size();
        for (int i = 0; i < len; i++)
            frequence[s[i] - 'a']++;
        
        sort (frequence.begin(), frequence.end(), cmp);
        int result = 0, max = frequence[0];
        for (int i = 1; i < frequence.size() && frequence[i] != 0; i++) {
            if (max > 0)
                max--;
            if (frequence[i] <= max)
                max = frequence[i];
            else
                result += (frequence[i] - max);
        }
        return result;
    }
};

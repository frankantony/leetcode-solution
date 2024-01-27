class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> last(26, 0);
        vector<bool> flag(26, false);
        int len = s.size();
        for (int i = 0; i < len; i++)
            last[s[i] - 'a'] = i;
        string result = "";
        for (int i = 0; i < len; i++) {
            if (!flag[s[i] - 'a']) {
                while (!result.empty() && result.back() > s[i] && last[result.back() - 'a'] > i) {
                    flag[result.back() - 'a'] = 0;
                    result.pop_back();
                }
                result += s[i];
            }
            flag[s[i] - 'a'] = true;
        }
        return result;
    }
};

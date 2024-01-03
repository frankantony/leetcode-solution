class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int len = s.size(), result = -1;
        vector<int> last(26, -1);
        for (int i = 0; i < len; i++) {
            if (last[s[i] - 'a'] != -1)
                result = max (result, i - last[s[i] -'a'] - 1);
            else
                last[s[i] - 'a'] = i;
        }
        return result;
    }
};

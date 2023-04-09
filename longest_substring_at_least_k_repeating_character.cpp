class Solution {
public:
    int longestSubstring(string s, int k) {
        int len = s.size();
        vector<int> frequence(26, 0);
        for (int j = 0; j < len; j++)
            frequence[s[j] - 'a']++;
        int i = 0;
        while (i < len && frequence[s[i] - 'a'] >= k)
            i++;
        if (i == len)
            return len;
        int left = longestSubstring (s.substr(0, i), k);
        int right = longestSubstring (s.substr(i + 1, len - i - 1), k);
        return max (left, right);
    }
};

class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.size();
        vector<int> count(26, 0);
        for (int i = 0; i < len; i++)
            count[s[i] - 'a']++;
        
        for (int i = 0; i < len; i++)
            if (count[s[i] - 'a'] == 1)
                return i;
        return -1;
    }
};

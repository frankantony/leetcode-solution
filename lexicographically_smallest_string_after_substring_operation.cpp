class Solution {
public:
    string smallestString(string s) {
        int len = s.size(), count = 0, i = 0;
        while (s[i] == 'a')
            i++;
        int c = 0;
        while (i < len && s[i] != 'a') {
            s[i] = s[i] - 1;
            i++;
            c++;
        }
        
        if (c == 0)
            s[len-1] = 'z';
        return s;
    }
};

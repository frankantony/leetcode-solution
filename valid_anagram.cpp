class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int len_s = s.size(), len_t = t.size();
        if (len_s != len_t) return false;
        for (int i = 0; i < len_s; i++)
            if (s[i] != t[i])
                return false;
        return true;
        
    }
};

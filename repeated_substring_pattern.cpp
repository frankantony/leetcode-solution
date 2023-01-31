class Solution {
public:
    
    bool verifyRepeated (string s, int len) {
        string a = s.substr(0, len);
        for (int i = 0; i < s.size(); i += len) {
            string current = s.substr(i, len);
            if (current != a)
                return false;
        }
        return true;
    }
    
    bool repeatedSubstringPattern (string s) {
        for (int i = 1; i < s.size(); i++) {
            if(verifyRepeated (s, i))
                return true;
        }
        return false;
    }

};

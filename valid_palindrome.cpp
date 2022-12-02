class Solution {
public:
    
    bool isPalindrome(string s) {
        string valid = "";
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                valid += (s[i] + ('a' - 'A'));
            }
            else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                valid += s[i];
            }
        }
        int len_valid = valid.size();
    
        for (int i = 0; i < len_valid; i++)
            if (valid[len_valid - i - 1] != valid[i])
                return false;
        
        return true;
    }
};

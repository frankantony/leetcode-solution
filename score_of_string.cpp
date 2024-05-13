class Solution {
public:
    int scoreOfString(string s) {
       int result = 0, len = s.size();
       for (int i = 0; i < len - 1; i++) 
            result += abs(s[i] - s[i+1]);
        return result;
    }
};

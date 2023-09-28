class Solution {
public:
    string decodeAtIndex(string s, int k) {
        int len = s.size();
        long long size = 0;
        for (int i = 0; i < len; i++) {
            char c = s[i];
            if (c >= 'a' && c <= 'z')
                size++;
            else
                size *= (c - '0');
        }
        
        char ch;
        for (int i = len - 1; i >= 0; i--) {
            k %= size;
            char c = s[i];
            if (c >= 'a' && c <= 'z') {
                if (k == 0) {
                    ch = c;
                    break;
                }
                else
                    size--;
            }
            else
                size /= (c - '0');

        }

        string result = "";
        result += ch;
        return result;
    }
};

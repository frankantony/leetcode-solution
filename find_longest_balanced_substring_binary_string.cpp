class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int len = s.size(), cont = 1, last = INT_MAX, result = 0;
        s += '@';
        for (int i = 0; i < len; i++) {
            if (s[i] == s[i+1])
                cont++;
            else {
                if (last != INT_MAX && s[i] == '1')
                    result = max (result, min (cont, last));
                last = cont;
                cont = 1;
            }
        }
        return 2 * result;
    }
};

class Solution {
public:
    int maxOperations(string s) {
        int len = s.size(), cont = 0, result = 0;
        for (int i = 0; i < len-1; i++) {
            cont += (s[i] == '1');
            if (s[i] == '1' && s[i+1] == '0')
                result += cont;
        }

        return result;
    }
};

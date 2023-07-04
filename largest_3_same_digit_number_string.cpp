class Solution {
public:
    bool isEqual (string s) {
        return s[0] == s[1] && s[1] == s[2];
    }

    string largestGoodInteger(string num) {
        int len = num.size(), max = -1;
        string result = "";
        for (int i = 0; i < len - 2; i++) {
            string current = num.substr (i, 3);
            if (max < current[0] - '0' && isEqual(current)) {
                max = current[0] - '0';
                result = current;
            }
        }
        return result;
    }
};

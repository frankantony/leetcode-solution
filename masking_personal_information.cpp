class Solution {
public:
    string maskPII(string s) {
        int len = s.size(), letters = 0, indexAtSign = 0;
        string digits = "";
        bool findAtSign = false;
        string first = "", last = "";
        for (int i = 0; i < len; i++) {
            if (s[i] >= '0' && s[i] <= '9')
                digits += s[i];
            else if (s[i] >= 'A' && s[i] <= 'Z' && findAtSign)
                s[i] = s[i] - ('A' - 'a');
            if (s[i] == '@') {
                indexAtSign = i;
                findAtSign = true;
                first += (s[0] >= 'A' && s[0] <= 'Z') ? s[0] - ('A' - 'a'): s[0];
                last += (s[i-1] >= 'A' && s[i-1] <= 'Z') ? s[i-1] - ('A' - 'a'): s[i-1];
            }
        }

        int lenDigits = digits.size();
        string x = "***-***-";
        if (lenDigits != 0) {
            string last = digits.substr(lenDigits - 4, 4);
            if (lenDigits == 10)
                return x + last;
            return "+" + string(lenDigits - 10, '*') + "-" + x + last;
        }
        else
            return first + "*****" + last + s.substr(indexAtSign, len - indexAtSign);
    }
};

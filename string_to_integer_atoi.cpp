class Solution {
public:
    bool isDigit (char c) {
        return c >= '0' && c <= '9';
    }

    int myAtoi(string s) {
        string number = "";
        bool isNegative = false;

        for (int i = 0; i < s.size(); i++) {
            char caracter = s[i];
            if (caracter == '-' || caracter == '+') {
                if (number.size() != 0 || (i+1 < s.size() && !isDigit(s[i+1])))
                    break;
                if (caracter == '-')
                    isNegative = true;
            }
            else if (isDigit(caracter))
                number += caracter;
            else if (number.size() != 0 || caracter != ' ')
                break;
        }

        if (number.size() == 0)
            return 0;
        int integer;
        try {
            integer = stoi(number);
        } catch (out_of_range e) {
            if (isNegative)
                return INT_MIN;
            else
                return INT_MAX;
        }

        return isNegative ? -integer : integer;
    }
};

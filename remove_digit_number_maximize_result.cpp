class Solution {
public:
    bool isGreather (string a, string b) {
        int lenA = a.size(), lenB = b.size();
        if (lenA != lenB)
            return lenA > lenB;
        for (int i = 0; i < lenA; i++)
            if (a[i] != b[i])
                return a[i] > b[i];
        return false;
    }

    string removeDigit(string number, char digit) {
        int len = number.size();
        string result = "0";
        for (int i = 0; i < len; i++) {
            if (number[i] == digit) {
                string x = number.substr(0, i) + number.substr(i + 1, len - i - 1);
                if (isGreather(x, result))
                    result = x;
            }
        }
        return result;
    }
};

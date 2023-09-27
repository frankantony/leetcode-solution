class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int countOne = 0, len = s.size();
        for (int i = 0; i < len; i++)
            countOne += s[i] == '1';
        string result = "";
        for (int i = 0; i < countOne - 1; i++)
            result += "1";
        for (int i = 0; i < len - countOne; i++)
            result += "0";
        result += "1";
        return result;
    }
};

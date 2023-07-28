class Solution {
public:
    int getValue (string str) {
        bool onlyDigit = true;
        int len = str.size();
        for (int i = 0; i < len; i++) {
            if (str[i] < '0' || str[i] > '9') {
                onlyDigit = false;
                break;
            }
        }
        if (onlyDigit)
            return stoi(str);
        else
            return len;
    }

    int maximumValue(vector<string>& strs) {
        int len = strs.size(), result = 0;
        for (int i = 0; i < len; i++) {
            result = max (result, getValue(strs[i]));
        }
        return result;
    }
};

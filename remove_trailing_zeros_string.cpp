class Solution {
public:
    string removeTrailingZeros(string num) {
        int i = num.size();
        while (i >= 0 && num[i-1] == '0')
            i--;
        return num.substr(0, i);
    }
};

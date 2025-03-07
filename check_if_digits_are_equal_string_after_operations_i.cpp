class Solution {
public:
    bool hasSameDigits(string s) {
        string current = s;
        while (current.size() > 2) {
            int lenCurrent = current.size();
            string x = "";
            for (int i = 0; i < lenCurrent - 1; i++)
                x += (current[i] - '0' + current[i+1] - '0') % 10 + '0';
            current = x;
        }
        return current[0] == current[1];
    }
};

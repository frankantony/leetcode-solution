class Solution {
public:
    string greatestLetter(string s) {
        map<char, bool> contain;
        int len = s.size();
        char greater = ' ';
        for (int i = 0; i < len; i++) {
            if (contain[s[i] + 32] || contain[s[i] - 32]) {
                char current = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] : s[i] - 32;
                if (greater == ' ' || current > greater)
                    greater = current;
            }
            contain[s[i]] = true;
        }

        string result = "";
        if (greater != ' ')
            result += greater;
        return result;
    }
};

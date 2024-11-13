class Solution {
public:
    int possibleStringCount(string word) {
        word += "@";
        int result = 0;
        int len = word.size(), cont = 1;
        for (int i = 0; i < len - 1; i++) {
            if (word[i] == word[i + 1])
                cont++;
            else {
                result += cont - 1;
                cont = 1;
            }
        }

        return result + 1;
    }
};

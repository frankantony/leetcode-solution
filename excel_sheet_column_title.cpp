class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";

        while (columnNumber != 0) {
            columnNumber -= 1;
            int value = (columnNumber % 26);
            result += (value + 'A');
            columnNumber /= 26;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

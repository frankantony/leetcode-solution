class Solution {
public:
    bool isPalindrome (string a) {
        int len = a.size();
        for (int i = 0; i < len / 2; i++)
            if (a[i] != a[len - i - 1])
                return false;
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        int len = words.size();
        for (int i = 0; i < len; i++)
            if (isPalindrome(words[i]))
                return words[i];
        return "";
    }
};

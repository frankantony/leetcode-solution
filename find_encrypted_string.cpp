class Solution {
public:
    string getEncryptedString(string s, int k) {
        int len = s.size();
        string result = "";
        for (int i = 0; i < len; i++)
            result += s[(i + k) % len];
        return result;
    }
};

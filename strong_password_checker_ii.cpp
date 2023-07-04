class Solution {
public:

    bool strongPasswordCheckerII(string password) {
        int len = password.size(), lowerCase = 0, upperCase = 0, digit = 0, special = 0;
        string specialCaracters = "!@#$%^&*()-+";
        for (int i = 0; i < len; i++) {
            char c = password[i];
            if (c >= 'a' && c <= 'z')
                lowerCase++;
            else if (c >= 'A' && c <= 'Z')
                upperCase++;
            else if (c >= '0' && c <= '9')
                digit++;
            else if (specialCaracters.find(c) != std::string::npos)
                special++;
            if (i < len - 1 && c == password[i + 1])
                return false;
        }
        return len >= 8 && lowerCase != 0 && upperCase != 0 && digit != 0 && special != 0;
    }
};

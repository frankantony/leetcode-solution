class Solution {
public:
    bool validNumber (string value) {
        if (value.size() == 0 || value.size() > 4 || 
            (value[0] == '0' && value.size() != 1))
            return false;
        for (int i = 0;i < value.size(); i++) {
            char caracter = value[i];
            if (caracter < '0' || caracter > '9')
                return false;
        }

        int integer = stoi(value);
        if (integer >= 0 && integer <= 255)
            return true;
        return false;
    }

    vector<string> split (string str, char token) {
        string s = "";
        vector<string> result;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] != token) {
                s += str[i];
            }
            else {
                result.push_back (s);
                s = "";
            }
        }
        result.push_back(s);
        return result;
    }

    bool isIPv4 (string queryIP) {
        vector<string> vet = split(queryIP, '.');
        if (vet.size() != 4) return false;

        for (string token: vet) {
            if (!validNumber(token))
                return false;
        }
        return true;
    }

    bool isHexadecimal (string token) {
        if (token.size() > 4 || token.size() == 0) return false;
        for (int i = 0; i < token.size(); i++) {
            char caracter = token[i];
            if ((caracter < 'a' || caracter > 'f')
                 && (caracter < 'A' || caracter > 'F')
                 && (caracter < '0' || caracter > '9'))
                 return false;
        }
        return true;
    }

    bool isIPv6 (string queryIP) {
        vector<string> vet = split(queryIP, ':');
        if (vet.size() != 8) return false;
        for (string token: vet) {
            if (!isHexadecimal(token))
                return false;
        }
        return true;
    }

    string validIPAddress(string queryIP) {
        if (isIPv4 (queryIP))
            return "IPv4";
        else if (isIPv6 (queryIP))
            return "IPv6";
        return "Neither";
    }
};

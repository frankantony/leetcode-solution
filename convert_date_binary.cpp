class Solution {
public:
    string toBinary (string b) {
        string result = "";
        int x = stoi(b);
        while (x != 0) {
            result = to_string (x % 2) + result;
            x /= 2;
        }
        return result;
    }

    string convertDateToBinary(string date) {
        date += "-";
        int lenDate = date.size();
        string current = "", result = "";
        for (int i = 0; i < lenDate; i++) {
            if (date[i] != '-')
                current += date[i];
            else {
                if (result == "")
                    result += toBinary (current);
                else
                    result += "-" + toBinary (current);
                current = "";
            }
        }
        return result;
    }
};

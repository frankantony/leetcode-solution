class Solution {
public:
    int sumDigits (string x) {
        int sum = 0;
        string aux = x;
        for (int i = 0; i < aux.size(); i++)
            sum += x[i] - '0';

        return sum;
    }

    int getLucky(string s, int k) {
        int len = s.size();
        string current = "";
        for (int i = 0; i < len; i++)
            current += to_string (s[i] - 96);

        int cont = 0, result;
        while (cont < k) {
            int c = sumDigits(current);
            current = to_string(c);
            result = c;
            cont++;
        }

        return result;
    }
};

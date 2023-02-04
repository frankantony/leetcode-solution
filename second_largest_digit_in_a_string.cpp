class Solution {
public:
    bool isDigit (char c) {
        return c >= '0' && c <= '9';
    }

    int secondHighest(string s) {
       vector<int> vet;

        for (int i = 0; i < s.size(); i++) {
            int number = s[i] - '0';
            if (isDigit(s[i]) && !(find(vet.begin(), vet.end(), number) != vet.end()))
                vet.push_back(number);
        }

        sort(vet.begin(), vet.end());
        int len = vet.size();
        if (len < 2) return -1;
        return vet[len-2];
    }
};

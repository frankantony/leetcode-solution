class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int result = 1;
        string cumulate = a;
        while(cumulate.size() < b.size()) {
            result++;
            cumulate += a;
        }

        if (cumulate.find(b) != -1)
            return result;

        result++;
        cumulate += a;
        if (cumulate.find(b) != -1)
            return result;
        else
            return -1;
    }
};

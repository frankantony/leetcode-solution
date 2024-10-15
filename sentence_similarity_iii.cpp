class Solution {
public:
    vector<string> split (string s) {
        s += " ";
        int len = s.size();
        string current = "";
        vector<string> result;
        for (int i = 0; i < len; i++) {
            if (s[i] != ' ')
                current += s[i];
            else {
                result.push_back(current);
                current = "";
            }
        }
        return result;
    }

    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> x = split (sentence1);
        vector<string> y = split (sentence2);
        int i = 0, j = 0, lenX = x.size(), lenY = y.size();
        
        while (i < lenX && j < lenY && x[i] == y[i]) {
		    i++;
		    j++;
        }

        int a = lenX - 1, b = lenY - 1;
        while (a >= i && b >= i && x[a] == y[b]) {
		    a--;
		    b--;
        }

        if (lenX > lenY)
            return i - 1 == b;
        return i - 1 == a;
    }
};

class Solution {
public:
    string intersec (string a, string b) {
        int i = 0, j = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        string result = "";
        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) {
                result += a[i++];
                j++;
            }
            else if (a[i] < b[j])
                i++;
            else
                j++;
        }
        return result;
    }

    vector<string> commonChars(vector<string>& words) {
        string current = words[0];
        for (int i = 1; i < words.size(); i++)
            current = intersec (current, words[i]);
        
        vector<string> result;
        for (int i = 0; i < current.size(); i++) {
            string c = "";
            c += current[i];
            result.push_back(c);
        }
        return result;
    }
};

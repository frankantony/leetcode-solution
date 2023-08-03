class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        int len = words.size();
        vector<string> result;
        for (int i = 0; i < len; i++) {
            string s = words[i], current = "";
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == separator) {
                    if (current != "")
                        result.push_back(current);
                    current = "";
                }
                else
                    current += s[j];
            }
            if (current != "")
                result.push_back(current);
        }
        return result;
    }
};

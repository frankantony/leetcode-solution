class Solution {
public:
    bool everyDistincts (string s) {
        int len = s.size();
        set<char> v;
        for (int i = 0; i < len; i++)
            v.insert(s[i]);

        return v.size() == len;
    }

    int maxLength(vector<string>& arr) {
        int len = arr.size(), result = 0;
        vector<string> candidates = {""};
        for (int i = 0; i < len; i++) {
            string w = arr[i];
            for (int j = 0; j < candidates.size(); j++) {
                
                string current = w + candidates[j];
                int lenCurrent = current.size();
                if (everyDistincts(current)) {
                    candidates.push_back(current);
                    result = max(result, lenCurrent);
                }
            }
        }
        return result;
    }
};

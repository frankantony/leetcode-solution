class Solution {
public:
    static bool cmp (string a, string b) {
        if (a.size() == b.size())
            return a < b;
        return a.size() < b.size();
    }

    string shortestBeautifulSubstring(string s, int k) {
        int len = s.size(), count, lenMinimize = INT_MAX;
        string result = "";
        vector<string> candidates;
        for (int i = 0; i < len; i++) {
            count = 0;
            for (int j = i; j < len; j++) {
                if (s[j] == '1')
                    count++;
                string sub = s.substr(i, j - i + 1);
                if (count == k) {
                    if(result == "" || (lenMinimize >= j - i + 1)) {
                        result = sub;
                        lenMinimize = j - i + 1;
                        candidates.push_back(sub);
                    }
                    break;
                }
            }
        }

        sort(candidates.begin(), candidates.end(), cmp);
        return (result != "") ? candidates[0]: "";
    }
};

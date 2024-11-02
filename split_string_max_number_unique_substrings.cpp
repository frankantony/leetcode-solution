class Solution {
public:
    int solve (string& s, int init, int len, set<string>& seen) {
        if (init == len) return 0;

        int result = 0;
        for (int i = init; i < len; ++i) {
            string substr = s.substr(init, i - init + 1);
            if (seen.find(substr) == seen.end()) {
                seen.insert(substr);
                result = max(result, 1 + solve (s, i + 1, len, seen));
                seen.erase(substr);
            }
        }

        return result;
    }

    int maxUniqueSplit(string s) {
        set<string> seen;
        int len = s.size();
        return solve (s, 0, len, seen);
    }
};

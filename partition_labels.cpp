class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char, int> last;
        int len = s.size();
        for (int i = 0; i < len; i++)
            last[s[i]] = i;
        int start = 0, end = 0;
        vector<int> result;
        for (int i = 0; i < len; i++) {
            char c = s[i];
            end = max (end, last[c]);
            if (i == end) {
                result.push_back(end - start + 1);
                start = i + 1;
            }
        }
        return result;
    }
};

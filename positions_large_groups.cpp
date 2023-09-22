class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int len = s.size(), count = 1;
        s += '@';
        vector<vector<int>> result;
        for (int i = 0; i < len; i++) {
            if (s[i] == s[i+1])
                count++;
            else {
                if (count >= 3)
                    result.push_back({i - count + 1, i});
                count = 1;
            }
        }

        return result;
    }
};

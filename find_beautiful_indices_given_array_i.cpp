class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        int lenS = s.size(), lenA = a.size(), lenB = b.size();
        vector<int> result;
        for (int i = 0; i <= lenS - lenA; i++) {
            if (s.substr(i, lenA) == a) {
                for (int j = max (0, i - k); j <= min(lenS - lenB, i + k); j++) {
                    if (s.substr(j, lenB) == b) {
                        result.push_back(i);
                        break;
                    }
                }
            }
        }
        return result;
    }
};

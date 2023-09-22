class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int lenS = s.size();
        vector<string> result;
        string remain = "";
        for (int i = 0; i < k - (lenS % k) && (lenS % k) != 0; i++)
            remain += fill;
        s = s + remain;
        int lenRemain = remain.size();
        for (int i = 0; i <= lenS + lenRemain - k; i += k) {
            string sub = s.substr(i, k);
            result.push_back(sub);
        }

        return result;
    }
};

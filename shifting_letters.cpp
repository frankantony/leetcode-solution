class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int len = s.size();
        vector<long> cumulative(len, 0);
        cumulative[len-1] = shifts[len-1];
        for (int i = len-2; i >= 0; i--)
            cumulative[i] = cumulative[i+1] + shifts[i];
        
        string result = "";
        for (int i = 0; i < len; i++) {
            int u = (cumulative[i] % 26);
            int d = 'z' - s[i];
            char x = (u <= d) ? s[i] + u: 'a' + (u - d - 1);

            result += x;
        }
        
        return result;
    }
};

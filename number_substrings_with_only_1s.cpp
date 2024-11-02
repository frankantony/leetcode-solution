class Solution {
public:
    int numSub(string s) {
        int result = 0, sum = 1, c = 2, len = s.size();
        int MOD = 1000000007;
        s += "!";
        for (int i = 0; i < len; i++) {
            if (s[i] == '0') continue;
            if (s[i] == s[i+1]) {
                sum += c++;
                while (sum >= MOD)
                    sum -= MOD;
            }
            else {
                result += sum;
                while (result >= MOD)
                    result -= MOD;
                sum = 1;
                c = 2;
            }
        }
        
        return result;
    }
};

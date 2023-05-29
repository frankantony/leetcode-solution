class Solution {
public:
    long long minimumCost(string s) {
        long long result = 0;
        int len = s.size();
        for (int i = 0; i < len-1; i++)
            if (s[i] != s[i+1])
                result += min (i + 1, len - i - 1);
        return result;
    }
};

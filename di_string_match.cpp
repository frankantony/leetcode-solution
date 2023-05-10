class Solution {
public:
    vector<int> diStringMatch(string s) {
        int len = s.size(), i = 0, left = 0, right = len;
        vector<int> result;
        while (i < len) {
            if (s[i] == 'I')
                result.push_back (left++);
            else
                result.push_back (right--);
            i++;
        }
        if (s[i-1] == 'D')
            result.push_back(left++);
        else
            result.push_back(right--);
        return result;
    }
};

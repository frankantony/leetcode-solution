class Solution {
public:
    string removeKdigits(string num, int k) {
        string result = "";
        int len = num.size(), c = 0;
        for (int i = 0; i < len; i++) {
            while (c < k && !result.empty() && result.back() > num[i]) {
                result.pop_back();
                c++;
            }

            result.push_back(num[i]);
        }

        result = result.substr(0, len - k);
        int l = 0;
        while (l < result.size() && result[l] == '0')
            l++;
        
        result = result.substr(l);
        return (result == "") ? "0": result;
    }
};

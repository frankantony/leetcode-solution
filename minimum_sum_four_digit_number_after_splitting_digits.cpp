class Solution {
public:
    int minimumSum(int num) {
       string x = to_string(num);
       sort(x.begin(), x.end());
       int result = (x[0] - '0') * 10 + (x[1] - '0') * 10 + (x[2] - '0') + (x[3] - '0');
       return result;
    }
};

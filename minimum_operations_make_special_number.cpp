class Solution {
public:
    int minimumOperations(string num) {
        int n = num.size(), result = INT_MAX;
        bool hasZero = false;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                int x = (num[i]-'0') * 10 + (num[j]-'0');
                if (x == 0 || x == 25 || x == 50 || x == 75)
                    result = min (result, n-i-2); 
                    //j-i-1 (digits between i and j) + n-j-1 (digits after j) = n-i-2
            }
            if (num[i] == '0')
                hasZero = true;
        }
        
        if (result != INT_MAX)
            return result;
        else {
            if (hasZero)
                return n-1;
            return n;
        }
    }
};

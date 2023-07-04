class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> isPrime (n + 1, true);
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i + i; j <= n; j += i)
                    isPrime[j] = false;
            }
        }
        
        vector<vector<int>> result;
        for (int i = 2; i <= n/2; i++)
            if (isPrime[i] && isPrime[n-i])
                result.push_back({i, n-i});
        return result;
    }
};

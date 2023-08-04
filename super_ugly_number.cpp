class Solution {
public:
    long long minimum (vector<long long>& vet) {
        int len = vet.size();
        long long result = vet[0];
        for (int i = 1; i < len; i++)
            result = min(result, vet[i]);
        return result;
    }

    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<long long> ugly(n, 1);
        int lenPrimes = primes.size();
        vector<int> count(lenPrimes, 1);
        vector<long long> next(lenPrimes, 1);

        for (int i = 0; i < lenPrimes; i++)
            next[i] = primes[i];
        for (int i = 1; i < n; i++) {
            long long value = minimum (next);
            ugly[i] = value;
            for (int j = 0; j < lenPrimes; j++) {
                if (next[j] == value) {
                    next[j] = ugly[count[j]++] * primes[j];
                }
            }
        }
        return ugly[n - 1];
    }
};

class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int len = nums.size();
        map<int, bool> divisors;
        for (int i = 0; i < len; i++) {
            int j = 2, n = nums[i];
            while (n != 1) {
                if (n % j == 0) {
                    divisors[j] = true;
                    n /= j;
                }
                else
                    j++;
            }
        }
        return divisors.size();
    }
};

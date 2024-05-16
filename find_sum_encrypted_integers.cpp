class Solution {
public:
    int encrypt (int x) {
        int n = x, maximum = 0, digits = 0;
        while (n != 0) {
            maximum = max (maximum, n % 10);
            n /= 10;
            digits++;
        }

        int result = 0, pot = 1;
        while (digits != 0) {
            result += maximum * pot;
            pot *= 10;
            digits--;
        }
        return result;
    }

    int sumOfEncryptedInt(vector<int>& nums) {
        int result = 0, len = nums.size();
        for (int i = 0; i < len; i++)
            result += encrypt(nums[i]);
        return result;
    }
};

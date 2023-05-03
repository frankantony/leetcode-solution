class Solution {
public:
    bool isPrime (int num) {
        if (num == 1) return false;
        for (int i = 2; i * i <= num; i++)
            if (num % i == 0)
                return false;
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size(), maximum = 0;
        for (int i = 0; i < n; i++) {
            if (maximum < nums[i][i] && isPrime (nums[i][i]))
                maximum = nums[i][i];
            if (maximum < nums[i][n-i-1] && isPrime (nums[i][n-i-1]))
                maximum = nums[i][n-i-1];
        }
        return maximum;
    }
};

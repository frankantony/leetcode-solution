class Solution {
public:
    bool isPrime (int n) {
        if (n == 1)
            return false;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                return false;
        return true;
    }

    int maximumPrimeDifference(vector<int>& nums) {
        int i = 0, len = nums.size();
        while (i < len && !isPrime(nums[i]))
            i++;
        int j = len - 1;
        while (j >= 0 && !isPrime(nums[j]))
            j--;
        
        return j - i;
    }
};

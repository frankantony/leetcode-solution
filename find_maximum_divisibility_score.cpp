class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int lenDivisors = divisors.size(), lenNums = nums.size(), maximum = 0;
        int result = INT_MAX;
        for (int i = 0; i < lenDivisors; i++) {
            int count = 0;
            for (int j = 0; j < lenNums; j++)
                if (nums[j] % divisors[i] == 0)
                    count++;
                
            if (maximum == count)
                result = min(result, divisors[i]);
            else if (maximum < count) {
                result = divisors[i];
                maximum = count;
            }
        }

        return result;
    }
};

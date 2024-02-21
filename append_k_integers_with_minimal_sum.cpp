class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        nums.push_back(0);
        sort(nums.begin(), nums.end());
        int len = nums.size(), i = 0;
        long long sum = 0;
        while (i < len - 1 && k > 0) {
            if (nums[i+1] != nums[i]){
                long long value = ((long long)(nums[i] + nums[i+1]) * (nums[i + 1] - nums[i] - 1)) / 2;
                sum += value;
                k -= (nums[i + 1] - nums[i] - 1);
            }
            i++;
        }

        int v = nums[i] - 1; 
        while (k < 0) {
            sum -= v--;
            k++;
        }

        if (k > 0)
            sum += (long long)(nums[len-1] + nums[len-1] + k + 1) * k / 2;

        return sum;
    }
};

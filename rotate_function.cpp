class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum = 0, base = 0, len = nums.size();
        for (int i = 0; i < len; i++) {
            sum += nums[i];
            base += (i * nums[i]);
        }

        int F[len];
        F[0] = base;
        int result = base;
        for (int i = 1; i < len; i++) {
            F[i] = F[i - 1] + sum - (len * nums[len - i]);
            result = max (result, F[i]);
        }

        return result;
    }
};

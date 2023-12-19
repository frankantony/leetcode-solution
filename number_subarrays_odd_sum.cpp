class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int sum = 0, count_sum_even = 1, count_sum_odd = 0, len = arr.size(), result = 0;
        for (int i = 0; i < len; i++) {
            sum += arr[i];
            if (sum % 2 == 0) {
                count_sum_even++;
                result += count_sum_odd;
            }
            else {
                count_sum_odd++;
                result += count_sum_even;
            }
            if (result >= 1000000007)
                result -= 1000000007;
        }
        return result;
    }
};

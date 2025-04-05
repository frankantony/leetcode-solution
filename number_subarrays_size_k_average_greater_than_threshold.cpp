class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0, len = arr.size();
        for (int i = 0; i < k; i++)
            sum += arr[i];
        int result = sum >= k * threshold;
        for (int i = k; i < len; i++) {
            sum += (arr[i] - arr[i - k]);
            result += sum >= k * threshold;
        }
        return result;
    }
};

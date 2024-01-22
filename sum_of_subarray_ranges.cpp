class Solution {
public:
    long long sumSubarray (vector<int>& arr, int flag) {
        int len = arr.size(), j = len - 1;
        long long result = 0;
        vector<int> right(len, 1);
        vector<int> left(len, 1);
        stack<pair<int, int>> s1, s2;
        for (int i = 0; i < len; i++) {
            int c = 1;
            while (!s1.empty() && flag * (s1.top().first - arr[i]) > 0) {
                c += s1.top().second;
                s1.pop();
            }

            s1.push({arr[i], c});
            left[i] = c;

            c = 1;
            while (!s2.empty() && flag * (s2.top().first - arr[j]) >= 0) {
                c += s2.top().second;
                s2.pop();
            }

            s2.push({arr[j], c});
            right[j--] = c;
        }

        for (int i = 0; i < len; i++) {
            long long product = (long long) right[i] * left[i] * arr[i];
            result += product;
        }
        
        return result;
    }

    long long subArrayRanges(vector<int>& nums) {
        long long sumLargest = sumSubarray(nums, -1);
        long long sumSmallest = sumSubarray(nums, 1);

        return sumLargest - sumSmallest;
    }
};

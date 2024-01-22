class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int len = arr.size(), j = len - 1, MOD = 1000000007;
        long long result = 0;
        vector<int> right(len, 1);
        vector<int> left(len, 1);
        stack<pair<int, int>> s1, s2;
        for (int i = 0; i < len; i++) {
            int c = 1;
            while (!s1.empty() && s1.top().first > arr[i]) {
                c += s1.top().second;
                s1.pop();
            }

            s1.push({arr[i], c});
            left[i] = c;

            c = 1;
            while (!s2.empty() && s2.top().first >= arr[j]) {
                c += s2.top().second;
                s2.pop();
            }

            s2.push({arr[j], c});
            right[j--] = c;
        }

        for (int i = 0; i < len; i++) {
            long long product = (long long) right[i] * left[i] * arr[i];
            result += product;
            if (result >= MOD)
                result -= MOD;
        }
        
        return result;
    }
};

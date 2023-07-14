class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        map<int, int> count;
        int len = arr.size(), result = 0;
        for (int i = 0; i < len; i++) {
            count[arr[i]] = count[arr[i] - difference] + 1;
            result = max (result, count[arr[i]]);
        }
        return result;
    }
};

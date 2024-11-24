class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int l = 0, len = arr.size();
        while (l < len - 1 && arr[l] <= arr[l+1])
            l++;

        if (l == len - 1) return 0;
        int r = len  - 1;
        while (r >= l && arr[r-1] <= arr[r])
            r--;
        
        int i = 0, j = r, result = min(r, len - l - 1);
        while (i <= l && j < len) {
            if (arr[i] <= arr[j]) {
                result = min (result, j - i - 1);
                i++;
            }
            else
                j++;
        }

        return result;
    }
};

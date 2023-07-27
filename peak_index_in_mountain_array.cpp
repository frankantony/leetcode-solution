class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i = 0, len = arr.size(), j = len - 1;
        while (i <= j) {
            int mid = (i + j) / 2;
            if (mid + 1 < len && arr[mid] > arr[mid + 1] && mid - 1 >= 0 &&
                arr[mid - 1] < arr[mid])
                    return mid;
            else if (mid + 1 < len && arr[mid] > arr[mid + 1])
                j = mid - 1;
            else
                i = mid + 1;
        }
        return arr[0] > arr[1] ? 0: len - 1;
    }
};

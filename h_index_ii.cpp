class Solution {
public:
    int hIndex(vector<int>& citations) {
        int len = citations.size();
        int l = 0, r = len - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (citations[mid] >= len - mid) {
                if (mid == 0 || citations[mid - 1] < len - mid + 1)
                    return len - mid;
                else
                    r = mid - 1;
            }
            else
                l = mid + 1;
        }
        return citations[0] != 0;
    }
};

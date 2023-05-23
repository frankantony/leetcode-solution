class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size();
        map<int, int> table1;
        int a = INT_MAX, b = INT_MAX;
        for (int i = 0; i < len1; i++) {
            table1[nums1[i]] = true;
            a = min (a, nums1[i]);
        }

        int smallerIntersection = INT_MAX;
        for (int i = 0; i < len2; i++) {
            if (table1.find(nums2[i]) != table1.end())
                smallerIntersection = min (smallerIntersection, nums2[i]);
            b = min (b, nums2[i]);
        }

        if (b > a)
            return min(a * 10 + b, smallerIntersection);
        return min(b * 10 + a, smallerIntersection);
    }
};

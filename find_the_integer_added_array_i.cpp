class Solution {
public:
    int minimum (vector<int>& v) {
        int len = v.size(), result = v[0];
        for (int i = 1; i < len; i++)
            result = min (result, v[i]);
        return result;
    }

    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int min1 = minimum(nums1), min2 = minimum(nums2);
        return min2 - min1;
    }
};

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0, len1 = nums1.size(), len2 = nums2.size();
        while (i < len1 && j < len2) {
            if (nums1[i] < nums2[j])
                i++;
            else if (nums1[i] > nums2[j])
                j++;
            else
                return nums1[i];
        }
        return -1;
    }
};

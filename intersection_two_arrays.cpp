class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size();
        sort (nums1.begin(), nums1.end());
        sort (nums2.begin(), nums2.end());
        vector<int> result;
        int i = 0, j = 0;
        while (i < len1 && j < len2) {
            if (nums1[i] < nums2[j])
                i++;
            else if (nums1[i] > nums2[j])
                j++;
            else {
                if (result.size() == 0 || result.back() != nums1[i])
                    result.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return result;
    }
};

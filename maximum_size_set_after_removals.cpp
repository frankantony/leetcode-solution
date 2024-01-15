class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        set<int> distinct1, distinct2, unionDistinct;
        int len = nums1.size();
        for (int i = 0; i < len; i++) {
            distinct1.insert(nums1[i]);
            unionDistinct.insert(nums1[i]);
        }

        for (int i = 0; i < len; i++) {
            distinct2.insert(nums2[i]);
            unionDistinct.insert(nums2[i]);
        }

        int lenUnionDistinct = unionDistinct.size(), len1 = distinct1.size(), len2 = distinct2.size();
        return min (lenUnionDistinct, min(len1, len / 2) + min(len2, len / 2));
    }
};

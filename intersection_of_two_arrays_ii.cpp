class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> contain1(1001, 0);
        vector<int> contain2(1001, 0);
        int len1 = nums1.size(), len2 = nums2.size();
        for (int i = 0; i < len1; i++)
            contain1[nums1[i]]++;
        for (int i = 0; i < len2; i++)
            contain2[nums2[i]]++;
        
        vector<int> result;
        for (int i = 0; i < len1; i++) {
            if (contain2[nums1[i]] > 0) {
                result.push_back(nums1[i]);
                contain2[nums1[i]]--;
            }
        }
        return result;
    }
};

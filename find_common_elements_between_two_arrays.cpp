class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int n = nums1.size(), m = nums2.size();
        map<int, bool> contain1, contain2;
        for (int i = 0; i < n; i++)
            contain1[nums1[i]] = true;
        int x = 0, y = 0;
        for (int i = 0; i < m; i++) {
            contain2[nums2[i]] = true;
            y += contain1[nums2[i]];
        }
        for (int i = 0; i < n; i++)
            x += contain2[nums1[i]];
        return {x, y};
    }
};

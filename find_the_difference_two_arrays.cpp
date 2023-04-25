class Solution {
public:
    map<int, bool> intersection (vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size();
        sort (nums1.begin(), nums1.end());
        sort (nums2.begin(), nums2.end());
        map<int, bool> result;
        int i = 0, j = 0;
        while (i < len1 && j < len2) {
            if (nums1[i] < nums2[j])
                i++;
            else if (nums1[i] > nums2[j])
                j++;
            else {
                result[nums1[i]] = true;
                i++;
                j++;
            }
        }
        return result;
    }

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size();
        map<int, bool> intersec = intersection (nums1, nums2);
        vector<int> x, y;
        for (int i = 0; i < len1; i++)
            if (!intersec[nums1[i]] && (x.size() == 0 || x.back() != nums1[i]))
                x.push_back(nums1[i]);
        for (int i = 0; i < len2; i++)
            if (!intersec[nums2[i]] && (y.size() == 0 || y.back() != nums2[i]))
                y.push_back(nums2[i]);
        vector<vector<int> > result;
        result.push_back(x);
        result.push_back(y);
        return result;
    }
};

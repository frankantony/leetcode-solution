class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        int len1 = nums1.size(), len2 = nums2.size();
        vector<int> result;
        for (int i = 0; i < len2; i++)
            m[nums2[i]] = i;
        
        for (int i = 0; i < len1; i++) {
            int j = m[nums1[i]];
            while (j < len2 && nums2[j] <= nums1[i])
                j++;
            
            if (j == len2)
                result.push_back(-1);
            else
                result.push_back(nums2[j]);
        }
        return result;
    }
};

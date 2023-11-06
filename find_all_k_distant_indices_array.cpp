class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> indexEqualKey;
        int len = nums.size();
        for (int i = 0; i < len; i++)
            if (nums[i] == key)
                indexEqualKey.push_back(i);
        
        vector<int> result;
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < indexEqualKey.size(); j++)
                if (abs(i - indexEqualKey[j]) <= k) {
                    result.push_back(i);
                    break;
                }
        }
        return result;
    }
};

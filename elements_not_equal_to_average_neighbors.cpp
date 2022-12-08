class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int len = nums.size(), cont = 0;
        sort(nums.begin(), nums.end());
        vector<int> result(len);
        for (int i = 0; i < len; i+= 2)
            result[i] = nums[cont++];
        for (int i = 1; i < len; i+= 2)
            result[i] = nums[cont++];
        
        return result;
    }
};

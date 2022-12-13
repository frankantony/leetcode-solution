class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int len = nums.size();
        vector<int> result;
        for (int i = 0; i < len; i++)
            if (nums[i] < pivot)
                result.push_back(nums[i]);
        
        for (int i = 0; i < len; i++)
            if (nums[i] == pivot)
                result.push_back(nums[i]);

        for (int i = 0; i < len; i++)
            if (nums[i] > pivot)
                result.push_back(nums[i]);
        
        return result;
    }
};

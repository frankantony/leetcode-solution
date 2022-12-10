class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> copy(nums);
        int len = nums.size();
        int i = 0, j = (len+1) / 2, index = len - 1;
        while (index >= 0) {
            if (index % 2 == 0)
                nums[index--] = copy[i++];
            else
                nums[index--] = copy[j++];
        }
    }
};

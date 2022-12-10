class Solution {
public:
    
    int findMin(vector<int>& nums) {
        int len = nums.size();
        int i = 0, j = len - 1, mid;
        while (i <= j) {
            mid = (i + j) / 2;
            if (mid + 1 < len && nums[mid + 1] < nums[mid])
                return nums[mid + 1];
            if (mid - 1 >= 0 && nums[mid] < nums[mid-1])
                return nums[mid];

            else if (nums[mid] > nums[j])
                i = mid + 1;
            else 
                j = mid - 1;
        }
        return nums[mid];
    }
};

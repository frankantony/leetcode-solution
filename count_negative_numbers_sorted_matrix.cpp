class Solution {
public:
    int search (vector<int>& nums) {
       int len = nums.size();
       int i = 0, j = len - 1;
        while(i <= j) {
            int mid = (i+j)/2;
            if (nums[mid] < 0 && (mid - 1 < 0 || nums[mid - 1] >= 0))
                return len - mid;
            else if (nums[mid] >= 0)
                i = mid+1;
            else
                j = mid-1;
        }
        return 0;
    }

   int countNegatives(vector<vector<int>>& grid) {
       int result = 0;
        for (int i = 0; i < grid.size(); i++) {
            int value = search (grid[i]);
            result += value;
        }

        return result;
    }
};

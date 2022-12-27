class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int len = nums.size();
        int i = 0, j = len - 1;
        while (i < j-1) {
            int mid = (i + j) / 2;
            cout << mid << endl;
            if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
                return mid;
            else if (nums[mid] < nums[mid+1])
                i = mid + 1;
            else
                j = mid - 1;
        }
        return nums[i] > nums[j] ? i : j;
    }
};

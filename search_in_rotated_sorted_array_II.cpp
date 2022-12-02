class Solution {
public:
    
    bool search (int initial, int end, vector<int>& nums, int target) {
        int i = initial, j = end;
        while (i <= j) {
            int mid = (i+j)/2;
            if (nums[mid] == target)
                return true;
            else if (nums[mid] < target)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return false;
    }
    
    bool search(vector<int>& nums, int target) {
        int i = 0, index, len = nums.size();
        while (i < len-1) {
            if (nums[i] > nums[i+1]) {
                index = i;
                break;
            }
            i++;
        }

        bool left = search (0, index, nums, target);
        bool right = search (index + 1, len - 1, nums, target);
        return left || right;
    }
};

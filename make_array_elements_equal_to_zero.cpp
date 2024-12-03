class Solution {
public:
    int process (int i, int d, vector<int>& vet) {
        vector<int> nums = vet;
        int curr = i, direction = d, len = nums.size();
        while (curr >= 0 && curr < len) {
            if (nums[curr] > 0) {
                nums[curr]--;
                direction = -direction;
            }
            curr = curr + direction;
        }

        for (int i = 0; i < len; i++)
            if (nums[i] != 0)
                return false;
        return true;
    }

    int countValidSelections(vector<int>& nums) {
        int len = nums.size(), result = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] == 0) {
                result += process (i, 1, nums);
                result += process (i, -1, nums);
            }
        }
        return result;
    }
};

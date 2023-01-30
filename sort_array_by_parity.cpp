class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int len = nums.size();
        vector<int> result(len);
        int i = 0, left = 0, right = len - 1;
        while(i < len) {
            if (nums[i] % 2 == 0)
                result[left++] = nums[i];
            else
                result[right--] = nums[i];
            i++;
        }
        return result;
    }
};

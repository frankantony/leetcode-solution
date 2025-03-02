class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int len = nums.size(), result = 0;
        for (int i = 0; i < len; i++) {
            if (i < k && i + k >= len)
                result += nums[i];
            else {
                if (i >= k && i + k < len)
                    result += (nums[i] > nums[i - k] && (nums[i] > nums[i + k])) ? nums[i] : 0;
                
                else if (i >= k)
                    result += (nums[i] > nums[i - k]) ? nums[i] : 0;
                else if (i + k < len)
                    result += (nums[i] > nums[i + k]) ? nums[i] : 0;
            }
        }
        
        return result;
    }
};

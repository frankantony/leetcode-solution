class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
      sort (nums.begin(), nums.end());
      int i = 0, len = nums.size(), result = 0;
      for (int j = 0; j < len; j++) {
        if (nums[j] - nums[i] > 2 * k)
          i++;
        else
            result = max (result, j - i + 1);
      }
      return result;
    }
};

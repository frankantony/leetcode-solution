class Solution {
public:
    static bool cmp (vector<int>& x, vector<int>& y) {
        return x[0] < y[0];
    }

    int numberOfPoints(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        int len = nums.size(), result = 0;
  
        int x = nums[0][0], y = nums[0][1];
        for (int i = 0; i < len - 1; i++) {
            if (y < nums[i + 1][0]) {
                result += (y - x) + 1;
                x = nums[i+1][0];
            }
            y = max(y, nums[i+1][1]);
        }

        result += (y - x) + 1;
        return result;
    }
};

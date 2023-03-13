class Solution {
public:
    static bool cmp (int x, int y) {
        string string_a = to_string(x);
        string string_b = to_string(y);
        return string_a + string_b > string_b + string_a;
    }

    string largestNumber(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end(), cmp);
        string result = "";
        bool findDifferentZero = false;
        for (int i = 0; i < len; i++) {
            if (nums[i] != 0 || findDifferentZero) {
                findDifferentZero = true;
                result += to_string(nums[i]);
            }
        }

        if (!findDifferentZero)
            return "0";
        return result;
    }
};

class Solution {
public:
    void insertInterval (vector<string>& result, int x, int y) {
        if (x != y)
            result.push_back(to_string(x) + "->" + to_string(y));
        else
            result.push_back(to_string(x));
    }

    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int len = nums.size();
        if (len == 0) 
            return result;

        int x = nums[0], y = nums[0];
        for (int i = 1; i < len; i++) {
            if (nums[i-1] + 1 == nums[i])
                y = nums[i];
            else {
                insertInterval(result, x, y);
                x = nums[i];
                y = nums[i];
            }
        }

        insertInterval(result, x, y);
        return result;
    }
};

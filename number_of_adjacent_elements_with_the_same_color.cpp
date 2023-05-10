class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        int count = 0, len = queries.size();
        vector<int> nums (n, 0), result;
        for (int i = 0; i < len; i++) {
            int index = queries[i][0];
            int color = queries[i][1];
            if (index+1 < n && nums[index+1] == nums[index] && nums[index] != 0)
                count--;
            if (index-1 >= 0 && nums[index-1] == nums[index] && nums[index] != 0)
                count--;
            if (index-1 >= 0 && nums[index-1] == color)
                count++;
            if (index+1 < n && nums[index+1] == color)
                count++;

            nums[index] = color;
            result.push_back (count);
        }

        return result;
    }
};

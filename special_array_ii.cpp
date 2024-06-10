class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int len = nums.size(), j = 0;
        vector<int> anomaly;
        anomaly.push_back(0);
        for (int i = 0; i < len - 1; i++) {
            if (nums[i] % 2 == nums[i+1] % 2)
                j++;
            anomaly.push_back(j);
        }
        
        vector<bool> result;
        int lenQueries = queries.size();
        for (int i = 0; i < lenQueries; i++) {
            if (anomaly[queries[i][0]] == anomaly[queries[i][1]])
                result.push_back (true);
            else
                result.push_back(false);
        }

        return result;
    }
};

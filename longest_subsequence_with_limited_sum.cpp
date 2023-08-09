class Solution {
public:
    int solve (int query, vector<int>& sum) {
        int len = sum.size();
        int i = 0, j = len - 1, mid;
        while (i <= j) {
            mid = (i + j) / 2;
            if ((mid + 1 == len || sum[mid + 1] > query) && sum[mid] <= query)
                return mid + 1;
            else if (sum[mid] > query)
                j = mid - 1;
            else
                i = mid + 1;
        }
        return mid;
    }

    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> sum(len, 0);
        sum[0] = nums[0];
        for (int i = 1; i < len; i++)
            sum[i] = sum[i - 1] + nums[i];
        
        int lenQuery = queries.size();
        vector<int> answer;
        for (int i = 0; i < lenQuery; i++) {
            int query = queries[i];
            int value = solve (query, sum);
            answer.push_back(value);
        }
        return answer;
    }
};

class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        int len = nums.size();
        string s = to_string (nums[0]);
        int numDigits = s.size();
        vector<vector<int> > frequence (numDigits, vector<int> (10, 0));
        for (int i = 0; i < len; i++) {
            string d = to_string (nums[i]);
            for (int j = 0; j < numDigits; j++)
                frequence[j][d[j] - '0']++;
        }

        long long result = 0;
        for (int i = 0; i < numDigits; i++) {
            for (int j = 0; j < 10; j++)
                for (int k = j + 1; k < 10; k++) {
                    // Number of distincts pairs {j, k} that can be formed in the position i.
                    long long numOfPairsDisticts = (long long) frequence[i][j] * frequence[i][k];
                    result += numOfPairsDisticts;
                }
        }

        return result;
    }
};

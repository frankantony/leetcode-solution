class Solution {
public:
    string copyOfZeroes (int x) {
        string copies = "";
        for (int i = 0; i < x; i++)
            copies += "0";
        return copies;
    }

    vector<string> toBinaryWithSameSize (vector<int>& nums) {
        vector<string> result;
        int len = nums.size(), lenMaximum = 0;
        for (int i = 0; i < len; i++) {
            int x = nums[i], count = 0;
            string current = "";
            while (x != 0) {
                current += (x % 2) + '0';
                x /= 2;
                count++;
            }

            reverse(current.begin(), current.end());
            result.push_back(current);
            lenMaximum = max (lenMaximum, count);
        }

        // Stantard each binary with same size.
        for (int i = 0; i < len; i++) {
            int l = result[i].size();
            result[i] = copyOfZeroes(lenMaximum - l) + result[i];
        }

        return result;
    }

    int totalHammingDistance(vector<int>& nums) {
        int len = nums.size();
        vector <string> binaries = toBinaryWithSameSize (nums);
        int numDigits = binaries[0].size();
        vector<vector<int> > frequence (numDigits, vector<int> (2, 0));
        for (int i = 0; i < len; i++) {
            string d = binaries[i];
            for (int j = 0; j < numDigits; j++)
                frequence[j][d[j] - '0']++;
        }

        int result = 0;
        for (int i = 0; i < numDigits; i++) {
                int numOfPairsDisticts = frequence[i][0] * frequence[i][1];
                result += numOfPairsDisticts;
        }

        return result;

    }
};

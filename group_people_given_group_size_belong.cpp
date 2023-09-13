class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;
        map<int, vector<int>> table;
        int len = groupSizes.size();
        for (int i = 0; i < len; i++) {
            int x = groupSizes[i];
            table[x].push_back(i);
            if (table[x].size() == groupSizes[i]) {
                result.push_back(table[x]);
                table[x] = {};
            }
        }
      return result;
    }
};

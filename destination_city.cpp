class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int len = paths.size();
        map<string, bool> table;
        for (int i = 0; i < len; i++)
            table[paths[i][0]] = true;
        for (int i = 0; i < len; i++)
            if (!table[paths[i][1]])
                return paths[i][1];
        return "";
    }
};

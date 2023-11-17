class Solution {
public:
    static int cmp (pair<vector<int>, char>& a, pair<vector<int>, char>& b) {
        return (a.first > b.first) || (a.first == b.first && a.second < b.second);
    }

    string rankTeams(vector<string>& votes) {
        int len = votes[0].size();
        vector<vector<int>> rank (26, vector<int>(len, 0));
        for (string& vote: votes)
            for (int i = 0; i < vote.size(); i++)
                rank[vote[i] - 'A'][i]++;
            
        vector<pair<vector<int>, char>> table (26);

        for (int i = 0; i < 26; i++)
            table[i] = {rank[i], i + 'A'};
            
        sort(table.begin(), table.end(), cmp);

        string result = "";
        for (int i = 0; i < min(26, len); i++)
            result += table[i].second;
        return result;
    }
};

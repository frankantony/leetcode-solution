class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> tableLost, tableWinner;
        for (int i = 0; i < matches.size(); i++) {
            int winner = matches[i][0];
            int lost = matches[i][1];
            tableLost[lost]++;
            tableWinner[winner]++;
        }

        vector<vector<int> > result;
        vector<int> oneLost, notLost;
        for (map<int, int>::iterator it = tableLost.begin(); it != tableLost.end(); ++it)
            if (it->second == 1)
                oneLost.push_back(it->first);

        for (map<int, int>::iterator it = tableWinner.begin(); 
                            it != tableWinner.end(); ++it)
            if (!tableLost[it->first])
                notLost.push_back(it->first);

        result.push_back(notLost);
        result.push_back(oneLost);
        return result;
    }
};

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int i = 0, j = 0, m = firstList.size(), n = secondList.size();
        int x, y;
        vector <vector<int> > result;
        while (i < m && j < n) {
            x = max (firstList[i][0], secondList[j][0]);
            y = min (firstList[i][1], secondList[j][1]);
            if (x <= y)
                result.push_back({x,y});
            
            if (firstList[i][1] < secondList[j][1])
                i++;
            else
                j++;
        }
        return result;
    }
};

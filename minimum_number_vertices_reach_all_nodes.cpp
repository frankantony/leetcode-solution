class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        int len = edges.size();
        map <int, bool> reachable, reach;
        for (int i = 0; i < len; i++) {
            int from = edges[i][0];
            int to = edges[i][1];
            reachable[to] = true;
            reach[from] = true;
        }
        vector<int> result;
        for (int i = 0; i < len; i++)
            if (!reachable[i] && reach[i])
                result.push_back(i);
        return result;
    }
};

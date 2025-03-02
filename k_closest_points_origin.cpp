class Solution {
public:
    struct cmp {
        bool operator() (pair<int, int> a, pair<int, int> b) {
            return a.second > b.second;
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int len = points.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        for (int i = 0; i < len; i++)
            pq.push({i, (points[i][0] * points[i][0]) + (points[i][1] * points[i][1])});
        
        vector<vector<int>> result;
        int c = 0;
        while (c < k) {
            pair<int, int> a = pq.top();
            vector<int> vet;
            int index = a.first;
            vet.push_back(points[index][0]);
            vet.push_back(points[index][1]);
            result.push_back(vet);
            pq.pop();
            c++;
        }
        return result;
    }
};

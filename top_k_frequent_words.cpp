class Solution {
public:
    struct cmp {
        bool operator() (pair<string, int> a, pair<string, int> b) {
            if (a.second == b.second)
                return a.first > b.first;
            return a.second < b.second;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> frequence;
        int len = words.size();
        for (int i = 0; i < len; i++)
            frequence[words[i]]++;

        priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;
        for (map<string, int>::iterator it = frequence.begin(); it != frequence.end(); ++it)
            pq.push({it->first, it->second});
        
        vector<string> result;
        int c = 0;
        while (c < k) {
            pair<string, int> a = pq.top();
            result.push_back(a.first);
            pq.pop();
            c++;
        }

        return result;
    }
};

class Solution {
public:
    struct cmp {
        bool operator() (pair<int, int> a, pair<int, int> b) {
            return a.second < b.second;
        }
    };

    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        int len = barcodes.size();
        
        map<int, int> frequence;
        for (int i = 0; i < len; i++)
            frequence[barcodes[i]]++;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        for (map<int, int>::iterator it = frequence.begin(); it != frequence.end(); ++it)
            pq.push(*it);
        
        vector<int> result;
        
        while (!pq.empty()) {
            pair<int, int> a = pq.top();
            result.push_back(a.first);
            pq.pop();
            int valueA = a.first, countA = a.second, valueB = 0, countB = 0;
            if (!pq.empty()) {
                pair<int, int> b = pq.top();
                result.push_back(b.first);
                valueB = b.first;
                countB = b.second;
                pq.pop();
            }

            if (countA != 1 && valueA != 0)
                pq.push({valueA, countA - 1});
            if (countB != 1 && valueB != 0)
                pq.push({valueB, countB - 1});

        }

        return result;
    }
};

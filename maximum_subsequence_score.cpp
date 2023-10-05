class Solution {
public:
    static int cmp (pair<int, int> x, pair<int, int> y) {
        return x.second > y.second;
    }

    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        map<int, int> table;
        int len = nums1.size();
        vector<pair<int, int> > v(len);
        for (int i = 0; i < len; i++)
            v[i] = {nums1[i], nums2[i]};
        
        sort(v.begin(), v.end(), cmp);
        priority_queue<int, vector<int>, greater<int>> pq;

        long long Ksum = 0;
        for (int i = 0; i < k; i++) {
            Ksum += v[i].first;
            pq.push(v[i].first);
        }

        long long result = Ksum * v[k-1].second;
        for (int i = k; i < len; i++) {
            Ksum += v[i].first;
            Ksum -= pq.top();
            pq.pop();

            pq.push(v[i].first);
            result = max (result, Ksum * v[i].second);
        }
        
        return result;
    }
};

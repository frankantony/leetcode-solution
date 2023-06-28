class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int len1 = nums1.size(), len2 = nums2.size();
        priority_queue<pair<int, vector<int>>> pq;
        for (int i = 0; i < len1; i++) {
            for (int j = 0; j < len2; j++) {
                int sum = nums1[i] + nums2[j];
                if (pq.size() < k)
                    pq.push({sum, {nums1[i], nums2[j]}});
                else if (sum < pq.top().first) {
                    pq.pop();
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
                else if (sum > pq.top().first)
                    break;
            }
        }
        vector<vector<int> > result;
        while (!pq.empty()) {
            vector<int> v = pq.top().second;
            result.push_back({v[0], v[1]});
            pq.pop();
        }
        return result;
    }
};

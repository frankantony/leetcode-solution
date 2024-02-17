class Solution {
public:
    static bool cmp (pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    }

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int, int> frequence;
        int len = arr.size();
        for (int i = 0; i < len; i++)
            frequence[arr[i]]++;
        vector<pair<int, int>> v;
        for (map<int, int>::iterator it = frequence.begin(); it != frequence.end(); ++it)
            v.push_back(*it);
        sort(v.begin(), v.end(), cmp);
        int i = 0, c = 0, l = v.size();
        while (c < k) {
            l--;
            c += v[i].second;
            i++;
        }
        
        return l + (c != k);
    }
};

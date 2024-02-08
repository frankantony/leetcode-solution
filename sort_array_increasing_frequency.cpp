class Solution {
public:
    static bool cmp (pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
    }

    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> count;
        int len = nums.size();
        for (int i = 0; i < len; i++)
            count[nums[i]]++;
        vector<pair<int, int>> v;
        for (map<int, int>::iterator it = count.begin(); it != count.end(); ++it)
            v.push_back({it->first, it->second});
        sort(v.begin(), v.end(), cmp);
        
        vector<int> result;
        int lenV = v.size();
        for (int i = 0; i < lenV; i++)
            for (int j = 0; j < v[i].second; j++)
                result.push_back(v[i].first);
        return result;
    }
};

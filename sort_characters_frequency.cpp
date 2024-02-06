class Solution {
public:
    static bool cmp (pair<char, int> a, pair<char, int> b) {
        return a.second > b.second;
    }

    string frequencySort(string s) {
        int len = s.size();
        map<char, int> frequence;
        for (int i = 0; i < len; i++)
            frequence[s[i]]++;

        vector<pair<char, int>> v;
        for (map<char, int>::iterator it = frequence.begin(); it != frequence.end(); ++it)
            v.push_back({it->first, it->second});
        
        sort(v.begin(), v.end(), cmp);
        int lenV = v.size();
        string result = "";
        for (int i = 0; i < lenV; i++)
            for (int j = 0; j < v[i].second; j++)
                result += v[i].first;
        return result;
    }
};

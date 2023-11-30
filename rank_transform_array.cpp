class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int len = arr.size();
        vector<int> copy;
        for (int i = 0; i < len; i++)
            copy.push_back(arr[i]);
        
        sort(copy.begin(), copy.end());
        map<int, int> rank;
        int c = 1;
        for (int i = 0; i < len; i++)
            if (rank.find(copy[i]) == rank.end())
                rank[copy[i]] = c++;
        
        vector<int> result;
        for (int i = 0; i < len; i++)
            result.push_back(rank[arr[i]]);
        return result;
    }
};

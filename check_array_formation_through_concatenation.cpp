class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        map<int, vector<int> > m;
        int len = arr.size();
        map<int, bool> table;
        for (int i = 0; i < len; i++)
            table[arr[i]] = true;
        
        int lenPieces = pieces.size();
        for (int i = 0; i < lenPieces; i++) {
            m[pieces[i][0]] = pieces[i];
            vector<int> v = pieces[i];
            for (int j = 0; j < v.size(); j++)
                if (!table[v[j]])
                    return false;
        }
        
        int i = 0;
        while (i < len) {
            vector<int> v = m[arr[i]];
            for (int j = 0; j < v.size(); j++) {
                if (v[j] != arr[i])
                    return false;
                i++;
            }
            i++;
        }
        return true;
    }
};

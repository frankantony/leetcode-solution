class Solution {
public:
    static bool cmp (int x, int y) {
        string a = to_string(x), b = to_string(y);
        int lenA = a.size(), lenB = b.size();
        for (int i = 0; i < min(lenA, lenB); i++)
            if (a[i] != b[i])
                return a[i] < b[i];

        return lenA < lenB;
    }

    vector<int> lexicalOrder(int n) {
        vector<int> v;
        for (int i = 1; i <= n; i++)
            v.push_back(i);
        
        sort(v.begin(), v.end(), cmp);
        return v;
    }
};

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int len = citations.size();
        sort (citations.begin(), citations.end());
        for (int i = 0; i < len; i++)
            if (citations[i] >= len - i)
                return len - i;
        return 0;
    }
};

class Solution {
public:
    static int f (string a) {
        int len = a.size(), i = 0;
        sort(a.begin(), a.end());
        while (i < len - 1 && a[i] == a[i + 1])
            i++;
        return i + 1;
    }

    static bool cmp (string a, string b) {
        return f (a) < f (b);
    }

    int countGreatherQuery (vector<string> words, int fQuery) {
        int i = 0, lenWords = words.size(), j = lenWords - 1, mid;
        while (i <= j) {
            mid = (i + j) / 2;
            int fMid = f (words[mid]);
            if (fMid > fQuery && (mid == 0 || f (words[mid - 1]) <= fQuery))
                return lenWords - mid;
            else if (fMid > fQuery)
                j = mid - 1;
            else
                i = mid + 1;
        }
        return 0;
    }

    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        int lenQueries = queries.size(), lenWords = words.size();
        sort(words.begin(), words.end(), cmp);
        vector<int> answer;
        for (int i = 0; i < lenQueries; i++) {
            int fQuery = f (queries[i]);
            int value = countGreatherQuery (words, fQuery);
            answer.push_back(value);
        }
        return answer;
    }
};

class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int i = startIndex, c = 0, result = INT_MAX, len = words.size();
        while (c < len && words[i] != target) {
            i = (i + 1) % len;
            c++;
        }

        if (c == len)
            return -1;
        result = min(result, c);

        i = startIndex;
        c = 0;
        while (c < len && words[i] != target) {
            i = (i == 0) ? len - 1: i - 1;
            c++;
        }

        if (c == len)
            return -1;
        result = min(result, c);
        return result;
    }
};

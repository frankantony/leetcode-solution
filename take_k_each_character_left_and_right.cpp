class Solution {
public:
    int search (int a, int b, vector<int>& frequence, int target) {
        int i = a, j = b, r = INT_MAX;
        while (i <= j) {
            int mid = (i+j) / 2;
            if (frequence[mid] == target) {
                if (frequence[mid + 1] != target)
                    return mid;
                else
                    i = mid + 1;
            }
            else if (frequence[mid] < target)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return r;
    }

    int takeCharacters(string s, int k) {
        int len = s.size();
        vector<int> frequenceA(len + 1), frequenceB(len + 1), frequenceC(len + 1);

        frequenceA.push_back(0);
        frequenceB.push_back(0);
        frequenceC.push_back(0);
        for (int i = 1; i <= len; i++) {
            frequenceA[i] = frequenceA[i - 1] + (s[i - 1] == 'a');
            frequenceB[i] = frequenceB[i - 1] + (s[i - 1] == 'b');
            frequenceC[i] = frequenceC[i - 1] + (s[i - 1] == 'c');
        }

        int result = INT_MAX;
        for (int i = 0; i <= len; i++) {
            int targetA = frequenceA[len] + frequenceA[i] - k;
            int yA = search (i, len, frequenceA, targetA);

            int targetB = frequenceB[len] + frequenceB[i] - k;
            int yB = search (i, len, frequenceB, targetB);

            int targetC = frequenceC[len] + frequenceC[i] - k;
            int yC = search (i, len, frequenceC, targetC);

            int v = min(min(yA, yB), yC);
            if (v != INT_MAX)
                result = min(result, i + len - v);
        }

        if (frequenceA[len] < k || frequenceB[len] < k || frequenceC[len] < k)
            return -1;
        return result;
    }
};

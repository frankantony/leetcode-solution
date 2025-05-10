class Solution {
public:
    vector<int> findWithMaximumFrequence (vector<int>& vet) {
        int len = vet.size(), frequenceMaximum = 0, valueMaximum = vet[0];
        vector<int> frequence (6, 0);
        for (int i = 0; i < len; i++) {
            frequence[vet[i] - 1]++;
            if (frequenceMaximum < frequence[vet[i] - 1]) {
                frequenceMaximum = frequence[vet[i] - 1];
                valueMaximum = vet[i];
            }
        }

        return {frequenceMaximum, valueMaximum};
    }

    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {

        vector<int> a = findWithMaximumFrequence (tops);
        vector<int> b = findWithMaximumFrequence (bottoms);
        int len = tops.size(), countSwapTop = 0, countSwapBottom = 0;
        for (int i = 0; i < len; i++) {
            if (tops[i] != a[1])
                countSwapTop += (bottoms[i] == a[1]);
            if (bottoms[i] != b[1])
                countSwapBottom += (tops[i] == b[1]);
        }

        if (countSwapTop == len - a[0] && countSwapBottom == len - b[0])
            return min (countSwapTop, countSwapBottom);
        else if (countSwapTop == len - a[0])
            return countSwapTop;
        else if (countSwapBottom == len - b[0])
            return countSwapBottom;
        return -1;
    }
};

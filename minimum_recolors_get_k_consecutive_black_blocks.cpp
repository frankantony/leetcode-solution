class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int black = 0;
        for (int i = 0; i < k; i++)
            if (blocks[i] == 'B')
                black++;
        int len = blocks.size(), result = k - black;
        for (int i = k; i < len; i++) {
            if (blocks[i-k] != blocks[i]) {
                if (blocks[i] == 'B')
                    black++;
                else
                    black--;
            }
            result = min (result, k - black);
        }

        return result;
    }
};

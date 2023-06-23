class Solution {
public:
    bool judgeCircle(string moves) {
        int u = 0, v = 0, len = moves.size();
        for (int i = 0; i < len; i++) {
            if (moves[i] == 'R')
                v++;
            else if (moves[i] == 'L')
                v--;
            else if (moves[i] == 'U')
                u--;
            else
                u++;
        }
        return u == 0 && v == 0;
    }
};

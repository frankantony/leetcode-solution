class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int countR = 0, countL = 0, lenMoves = moves.size();
        for (int i = 0; i < lenMoves; i++) {
            countR += (moves[i] == 'R');
            countL += (moves[i] == 'L');
        }
        
        int result = countR - countL;
        for (int i = 0; i < lenMoves; i++) {
            if (moves[i] == '_') {
                if (result < 0)
                    result--;
                else
                    result++;
            }
        }
        return abs(result);
    }
};

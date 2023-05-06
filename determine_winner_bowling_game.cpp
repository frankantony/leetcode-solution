class Solution {
public:
    int calculateScore (vector<int>& player) {
        int score = 0, len = player.size();
        for (int i = 0; i < len; i++) {
            if ((i-1 >= 0 && player[i-1] == 10) || (i-2 >= 0 && player[i-2] == 10))
                score += 2 * player[i];
            else
                score += player[i];
        }
        return score;
    }

    int isWinner(vector<int>& player1, vector<int>& player2) {
        int scorePlayer1 = calculateScore (player1), scorePlayer2 = calculateScore (player2);
        if (scorePlayer1 > scorePlayer2)
            return 1;
        else if (scorePlayer2 > scorePlayer1)
            return 2;
        return 0;
    }
};

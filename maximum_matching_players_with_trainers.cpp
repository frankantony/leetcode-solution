class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int lenPlayers = players.size(), lenTrainers = trainers.size(), result = 0;
        int i = 0, j = 0;
        while (i < lenPlayers && j < lenTrainers) {
            if (players[i] <= trainers[j]) {
                result++;
                i++;
                j++;
            }
            else
                j++;
        }
        return result;
    }
};

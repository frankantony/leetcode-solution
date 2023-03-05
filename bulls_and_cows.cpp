class Solution {
public:
    string getHint(string secret, string guess) {
        int len = secret.size(), bulls = 0, cows = 0;
        map<int, int> frequenceGuess, frequenceSecret;
        for (int i = 0; i < len; i++) {
            if (secret[i] == guess[i])
                bulls++;
            else {
                frequenceGuess[guess[i]]++;
                frequenceSecret[secret[i]]++;
            }
        }

        for (int i = 0; i < len; i++) {
            if (frequenceGuess[guess[i]] != 0 && frequenceSecret[guess[i]] != 0) {
                frequenceSecret[guess[i]]--;
                frequenceGuess[guess[i]]--;
                cows++;
            }
        }
        
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};

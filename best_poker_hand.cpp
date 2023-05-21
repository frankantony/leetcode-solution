class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<int, int> countRanks;
        map<char, int> countSuits;
        int maxRanks = 0, maxSuits = 0;
        for (int i = 0; i < 5; i++) {
            countRanks[ranks[i]]++;
            maxRanks = max(maxRanks, countRanks[ranks[i]]);
            countSuits[suits[i]]++;
            maxSuits = max(maxSuits, countSuits[suits[i]]);
        }
        if (maxSuits == 5)
            return "Flush";
        else if (maxRanks >= 3)
            return "Three of a Kind";
        else if (maxRanks == 2)
            return "Pair";
        else
            return "High Card";
    }
};

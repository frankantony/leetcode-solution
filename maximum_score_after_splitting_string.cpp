class Solution {
public:
    int maxScore(string s) {
        int len = s.size(), countOnesLeft = 0, countZeroesRight = (s[0] == '0');
        for (int i = 1; i < len; i++)
            countOnesLeft += s[i] == '1';
        int score = countOnesLeft + countZeroesRight, result = score;
        for (int i = 1; i < len - 1; i++) {
            if (s[i] == '1')
                score--;
            else
                score++;
            result = max (result, score);
        }
        return result;
    }
};

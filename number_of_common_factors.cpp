class Solution {
public:
    int commonFactors(int a, int b) {
        int l = min (a, b), answer = 0;
        for (int i = 1; i <= l; i++)
            if (a % i == 0 && b % i == 0)
                answer++;
        return answer;
    }
};

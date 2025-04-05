class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> answer;
        int len = cost.size();
        int minimum = cost[0];
        answer.push_back(minimum);
        for (int i = 1; i < len; i++) {
            answer.push_back(min (cost[i], minimum));
            minimum = min (minimum, cost[i]);
        }

        return answer;
    }
};

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double time = customers[0][1];
        int len = customers.size(), current = customers[0][0] + customers[0][1];
        for (int i = 1; i < len; i++) {
            current = max (current, customers[i][0]);
            time += (current + customers[i][1] - customers[i][0]);
            current += customers[i][1];
        }

        return time / len;
    }
};

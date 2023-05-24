class Solution {
public:
    int numTeams(vector<int>& rating) {
        int len = rating.size();
        vector<int> greater(len, 0), smaller(len, 0);
        for (int i = 0; i < len-1; i++) {
            for (int j = i + 1; j < len; j++) {
                if (rating[j] < rating[i])
                    smaller[i]++;
                else
                    greater[i]++;
            }
        }

        int result = 0;
        for (int i = 0; i < len-2; i++) {
            for (int j = i + 1; j < len; j++) {
                if (rating[i] > rating[j])
                    result += smaller[j];
                else
                    result += greater[j];
            }
        }
        return result;
    }
};

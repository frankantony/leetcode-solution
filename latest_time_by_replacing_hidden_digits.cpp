class Solution {
public:
    string maximumTime(string time) {
        int lenTime = time.size();
        for (int i = 0; i < lenTime; i++) {
            if (time[i] == '?') {
                if (i == 0)
                    time[i] = (time[i+1] <= '3' || time[i+1] == '?') ? '2': '1';
                else if (i == 1)
                    time[i] = (time[i-1] == '2' || time[i+1] == '?') ? '3': '9';
                else if (i == 3)
                    time[i] = '5';
                else if (i == 4)
                    time[i] = '9';
            }
        }
        return time;
    }
};

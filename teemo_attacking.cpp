class Solution {
public:
    struct Interval {
        int start, end;
    };

    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int start = timeSeries[0], end = timeSeries[0] + duration - 1, len = timeSeries.size();

        vector<Interval> intervals;
        intervals.push_back (Interval {start, end});

        for (int i = 1; i < len; i++) {
            Interval last = intervals.back();
            if (last.end < timeSeries[i])
                intervals.push_back(Interval {timeSeries[i], timeSeries[i] + duration - 1});
            else {
                start = last.start;
                end = max (end, timeSeries[i] + duration - 1);
                intervals.back() = Interval {start, end};
            }
        }

        int result = 0;
        for (int i = 0; i < intervals.size(); i++)
            result += (intervals[i].end - intervals[i].start + 1);
        
        return result;
    }
};


class Solution {
public:

    static int cmp (vector<int> a, vector<int> b) {
        return a[0] < b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        vector<vector<int> > result;
        int len = intervals.size(), x, y;

        result.push_back({intervals[0][0], intervals[0][1]});
        
        for (int i = 1; i < len; i++) {
            vector<int> last = result.back();
            if (last[1] < intervals[i][0]) //has not conflicts
                result.push_back({intervals[i][0], intervals[i][1]});

            else { // has conflicts
                    x = last[0];
                    y = max (intervals[i][1], last[1]);
                    result.back() = {x,y};
            }
        }

        return result;


    }
};

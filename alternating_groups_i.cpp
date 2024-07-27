class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int len = colors.size(), result = 0, next, previous;
        for (int i = 0; i < len; i++) {
            int next = colors[(i+1) % len], previous = (i == 0) ? colors[len - 1]: colors[i - 1];
            if (colors[i] != next && colors[i] != previous)
                result++;
        }
        
        return result;
    }
};

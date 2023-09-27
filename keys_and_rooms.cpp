class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int len = rooms.size();
        vector<bool> visit (len, false);
        visit[0] = true;
        stack<int> str = stack<int>({0});
        while (str.size() != 0) {
            vector<int> keys = rooms[str.top()];
            str.pop();
            for (int key: keys)
                if (!visit[key]) {
                    str.push(key);
                    visit[key] = true;
                }
        }

        for (int i = 0; i < len; i++)
            if (!visit[i])
                return false;
        return true;
    }
};

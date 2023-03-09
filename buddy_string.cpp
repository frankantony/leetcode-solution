class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int lenS = s.size(), lenGoal = goal.size();
        if (lenS != lenGoal) return false;

        vector<int> index;
        unordered_set<char> sLetters;
        for (int i = 0; i < lenS; i++) {
            if (s[i] != goal[i])
                index.push_back(i);
            if (index.size() > 2)
                return false;
            sLetters.insert(s[i]);
        }
        
        if (index.size() == 1)
            return false;
        if (index.size() == 2)
            return s[index[0]] == goal[index[1]] && s[index[1]] == goal[index[0]];

        return sLetters.size() < s.size();
    }
};

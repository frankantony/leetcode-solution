class Solution {
public:
    bool areDisjoint (vector <int>& a, vector<int>& b) {
        int lenA = a.size(), lenB = b.size();
        unordered_set<int> set1(a.begin(), a.begin() + lenA);
        unordered_set<int> set2(b.begin(), b.begin() + lenB);
        for (int x : set1)
            if (set2.find(x) != set2.end())
                return false;
        return true;
    }

    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int m = friendships.size();
        set <int> usersNotSpeakEachOther;
        bool existsUserNotSpeak = false;
        for (int i = 0; i < friendships.size(); i++) {
            int u = friendships[i][0], v = friendships[i][1];
            if (areDisjoint(languages[u - 1], languages[v - 1])) {
                usersNotSpeakEachOther.insert(u - 1);
                usersNotSpeakEachOther.insert(v - 1);
                existsUserNotSpeak = true;
            }
        }

        vector<int> languageMorePopularNotSpeak(n, 0);
        for (int user : usersNotSpeakEachOther) {
            for (int j = 0; j < languages[user].size(); j++) {
                int language = languages[user][j] - 1;
                languageMorePopularNotSpeak[language]++;
            }
        }

        int lenNotSpeakEachOther = usersNotSpeakEachOther.size(), maximum = 0;
        for (int i = 0; i < n; i++)
            maximum = max (languageMorePopularNotSpeak[i], maximum);
        return lenNotSpeakEachOther - maximum;
    }
};

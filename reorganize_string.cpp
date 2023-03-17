class Solution {
public:
    struct Pair {
        char character;
        int frequence;
        bool operator< (const Pair& p) const {
            return frequence < p.frequence;
        }
    };

    string reorganizeString(string s) {
        vector<int> freq(26, 0);

        int len = s.size();
        for (int i = 0; i < len; i++)
            freq[s[i] - 'a']++;

        priority_queue<Pair> pq;
        for (int i = 0; i < 26; i++) {
            char character = i + 'a';
            if (freq[i] != 0)
                pq.push(Pair{character, freq[i]});
        }

        Pair previous {'#', -1};

        string result = "";
        while (!pq.empty()) {
            Pair p = pq.top();
            pq.pop();
            result += p.character;
            if (previous.frequence > 0)
                pq.push(previous);
            
            p.frequence--;
            previous = p;
        }

        if (len != result.size())
            return "";
        return result;
    }
};

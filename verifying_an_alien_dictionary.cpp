class Solution {
public:
    bool isSmaller (string first,string second, map<int, int> table) {
        int lenFirst = first.size(), lenSecond = second.size(), i = 0;
        while (i < lenFirst && i < lenSecond) {
            if (table[first[i]] < table[second[i]])
                return true;
            else if (table[first[i]] > table[second[i]])
                return false;
            i++;
        }
        return lenFirst <= lenSecond;
    }

    bool isAlienSorted(vector<string>& words, string order) {

        map<int, int> table;
        for (int i = 0; i < order.size(); i++) {
            table[order[i]] = i;
        }
        for (int i = 0; i < words.size() - 1; i++) {
            if (!isSmaller(words[i], words[i + 1], table))
                return false;
        }
        return true;
    }
};

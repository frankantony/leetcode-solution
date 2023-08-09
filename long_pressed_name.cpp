class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int lenName = name.size(), lenTyped = typed.size(), c = 0;
        for (int i = 0; i < lenTyped; i++) {
            if (name[c] == typed[i])
                c++;
            else if (c == 0 || typed[i] != name[c - 1])
                return false;
        }

        return c == lenName;
    }
};

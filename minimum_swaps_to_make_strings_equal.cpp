class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int lenS1 = s1.size();
        int x = 0, y = 0;
        for (int i = 0; i < lenS1; i++) {
            if (s1[i] != s2[i]) {
                if (s1[i] == 'x')
                    x++;
                else
                    y++;
            }
        }
        if ((x + y) % 2 != 0)
            return -1;
        return (x + y) / 2 + min(x, y) % 2;
    }
};

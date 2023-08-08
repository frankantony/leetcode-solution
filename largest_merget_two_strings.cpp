class Solution {
public:
    string largestMerge(string word1, string word2) {
        int a = 0, b = 0, lenWord1 = word1.size(), lenWord2 = word2.size();
        string c = "";
        while (a < lenWord1 && b < lenWord2) {
            if (word1[a] > word2[b])
                c += word1[a++];
            else if (word1[a] < word2[b])
                c += word2[b++];
            else {
                string x = word1.substr(a + 1);
                string y = word2.substr(b + 1);
                if (x > y)
                    c += word1[a++];
                else
                    c += word2[b++];
            }
        }

        while (a < lenWord1)
            c += word1[a++];
        while (b < lenWord2)
            c += word2[b++];

        return c;
    }
};

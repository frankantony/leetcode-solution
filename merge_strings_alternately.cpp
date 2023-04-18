class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0, len1 = word1.size(), len2 = word2.size();
        string result = "";
        while (i < len1 || j < len2) {
            if (i < len1)
                result += word1[i++];
            if (j < len2)
                result += word2[j++];
        }

        return result;
    }
};

class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int i = 0, j = 0, k = 0, len1 = s1.size(), len2 = s2.size(), len3 = s3.size();
        while (i < len1 && j < len2 && k < len3 && s1[i] == s2[j] && s2[j] == s3[k]) {
            i++;
            j++;
            k++;
        }
        
        if (i == 0 && j == 0 && j == 0)
            return -1;
        return (len1 - i) + (len2 - j) + (len3 - k);
    }
};

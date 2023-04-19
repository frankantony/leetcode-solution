class Solution {
public:
    int addMinimum(string word) {
        int len = word.size(), k = 1;
        
        for (int i = 1; i < len; i++)
            if (word[i] <= word[i - 1])
                k++;
        return 3 * k - len;
    }
};

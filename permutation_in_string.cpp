class Solution {
public:

    bool checkInclusion(string s1, string s2) {
        int len1 = s1.size(), len2 = s2.size();
        vector<int> table1(26, 0);
        for (int i = 0; i < len1; i++)
            table1[s1[i] - 'a']++;
        
        for (int i = 0; i < len2 - len1 + 1; i++) {
            vector<int> table2(26, 0);
            for (int j = i; j < i + len1; j++)
                table2[s2[j] - 'a']++;
            if (table1 == table2)
                return true;
        }
        
        return false;
    }
};

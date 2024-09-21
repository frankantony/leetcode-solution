class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int len = s1.size();
        vector<int> differs;
        for (int i = 0; i < len; i++)
            if (s1[i] != s2[i])
                differs.push_back(i);
        
        int lenDiffers = differs.size();
        return (lenDiffers == 0) || (lenDiffers == 2 && s1[differs[0]] == s2[differs[1]] && s1[differs[1]] == s2[differs[0]]);
    }
};

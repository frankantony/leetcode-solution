class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int len = trust.size();
        map<int, int> degreeIn, degreeOut;
        for (int i = 0; i < len; i++) {
            vector<int> v = trust[i];
            degreeIn[v[1]]++;
            degreeOut[v[0]]++;
        }

        int result = -1;
        for (int a = 1; a <= n; a++)
            if (degreeIn[a] == n - 1 && degreeOut[a] == 0) {
                if (result != -1)
                    return -1;
                else
                    result = a;
            }
        
        return result;
    }
};

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int len = A.size();
        map<int, bool> contain1, contain2;
        vector<int> C(len, 0);
        C[0] = (A[0] == B[0]);
        contain1[A[0]] = true;
        contain2[B[0]] = true;
        for (int i = 1; i < len; i++) {
            if (A[i] == B[i])
                C[i] = C[i-1] + 1;
            else
                C[i] = C[i-1] + (contain1[B[i]]) + (contain2[A[i]]);
            contain1[A[i]] = true;
            contain2[B[i]] = true;
        }
        return C;
    }
};

class Solution {
public:
    int countElementsSmallerThan (vector<vector<int> >& matrix, int value) {
        int result = 0, n = matrix.size();
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] > value)
                return result;
            if (matrix[i][n - 1] <= value)
                result += n;
            else {
                int aux = 0;
                for (int j = n/2; j >= 1; j /= 2)
                    while (aux + j < n && matrix[i][aux + j] <= value)
                        aux += j;
                result += (aux + 1);
            }
        }
        return result;
    }

    int kthSmallest(vector<vector<int> >& matrix, int k) {
        int n = matrix.size(), left = matrix[0][0], right = matrix[n-1][n-1];
        while (left <= right) {
            int mid = (left + right) / 2;
            int countSmallerThanMid = countElementsSmallerThan (matrix, mid);
            if (countSmallerThanMid >= k)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }
};

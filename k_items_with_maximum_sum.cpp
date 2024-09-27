class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int result = 0;
        int x = min(numOnes, k);
        result += x;
        k -= x;
        if (k > 0) {
            int y = min(numZeros, k);
            k -= y;
        }

        if (k > 0) {
            int z = min(numNegOnes, k);
            result -= z;
        }
        
        return result;
    }
};

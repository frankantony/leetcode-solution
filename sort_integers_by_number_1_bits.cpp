class Solution {
public:
    static int countOnes (int x) {
        int count = 0;
        while (x != 0) {
            count += (x % 2);
            x /= 2;
        }
        return count;
    }

    static bool cmp (int x, int y) {
        int countOnesX = countOnes (x), countOnesY = countOnes (y);
        if (countOnesX == countOnesY)
            return x < y;
        return countOnesX < countOnesY;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};

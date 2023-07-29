/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long i = 1, j = n;
        while (i <= j) {
            long mid = (i + j) / 2;
            if (guess(mid) == 0)
                return mid;
            else if (guess(mid) > 0)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return -1;
    }
};

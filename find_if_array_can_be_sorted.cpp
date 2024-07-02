class Solution {
public:
    bool hasSameNumberSetBits(int x, int y) {
        int countOnesX = 0, countOnesY = 0;
        while (x != 0) {
            countOnesX += (x % 2);
            x /= 2;
        }

        while (y != 0) {
            countOnesY += (y % 2);
            y /= 2;
        }

        return countOnesX == countOnesY;
    }

    bool canSortArray (vector<int>& nums) {
        int len = nums.size(), i = 0, minPrevious = nums[0], maxPrevious = nums[0];

        while (i + 1 < len && hasSameNumberSetBits(nums[i], nums[i+1])) {
            maxPrevious = max (maxPrevious, nums[i+1]);
            minPrevious = min (minPrevious, nums[i+1]);
            i++;
        }

        if (i == len - 1) return true;
        int minCurrent = nums[i+1], maxCurrent = nums[i+1];
        bool findWithoutSameSetBits = false;
        while (i + 1 < len) {
            if (!hasSameNumberSetBits(nums[i], nums[i+1])) {
                if (findWithoutSameSetBits) {
                    if (maxPrevious > minCurrent)
                        return false;
                    maxPrevious = maxCurrent;
                    minPrevious = minCurrent;
                    maxCurrent = nums[i+1];
                    minCurrent = nums[i+1];
                }
                findWithoutSameSetBits = true;
            }
            else {
                minCurrent = min (minCurrent, nums[i+1]);
                maxCurrent = max (maxCurrent, nums[i+1]);
            }
            i++;
        }

        if (maxPrevious > minCurrent)
            return false;

        return true;
    }
};

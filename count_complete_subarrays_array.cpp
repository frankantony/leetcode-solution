class Solution {
public:
    int countElementsDistinct (int len, vector<int>& nums) {
        map<int, bool> count;
        for (int i = 0; i < len; i++)
            count[nums[i]] = true;
        return count.size();
    }

    int countCompleteSubarrays(vector<int>& nums) {
        int len = nums.size(), c = countElementsDistinct (len, nums), result = 0, i = 0;
        map<int, int> count;
        for (int j = 0; j < len; j++) {
            c -= count[nums[j]] == 0;
            count[nums[j]]++;
            while (c == 0) {
                c += count[nums[i]] == 1;
                count[nums[i]]--;
                i++;
            }
            result += i;
        }
        return result;
    }
};

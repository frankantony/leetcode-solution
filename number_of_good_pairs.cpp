class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int len = nums.size(), result = 0, cont = 1;
        sort(nums.begin(), nums.end());
        nums.push_back(101);
        for (int i = 0; i < len; i++) {
            if (nums[i] == nums[i + 1])
                cont++;
            else {
                int value = cont * (cont - 1) / 2;
                result += value;
                cont = 1;
            }
        }
        return result;
    }
};

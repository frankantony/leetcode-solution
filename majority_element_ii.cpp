class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size(), cont = 1;
        nums.push_back(1000000005);
        vector<int> result;
        for (int i = 0; i < len; i++) {
            if (nums[i] == nums[i+1])
                cont++;
            else {
                if (cont > floor (len / 3))
                    result.push_back(nums[i]);
                cont = 1;
            }
        }
        return result;
    }
};

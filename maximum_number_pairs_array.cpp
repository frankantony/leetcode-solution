class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        nums.push_back(101);
        sort(nums.begin(), nums.end());
        int len = nums.size(), c = 1, a = 0, b = 0;
        for (int i = 0; i < len - 1; i++) {
            if (nums[i] == nums[i+1])
                c++;
            else {
                a += (c / 2);
                b += (c % 2);
                c = 1;
            }
        }
        
        return {a,b};
    }
};

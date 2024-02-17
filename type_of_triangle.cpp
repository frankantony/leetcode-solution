class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int c = 0;
        for (int i = 0; i < 3; i++)
            if (nums[i] == nums[i+1])
                c++;
        
        if (nums[0] + nums[1] <= nums[2])
            return "none";
        else if (c == 2)
            return "equilateral";
        else if (c == 1)
            return "isosceles";
        return "scalene";
    }
};

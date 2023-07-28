class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int len = nums.size();
        vector<int> answer(len, 0);
        for (int i = 0; i < len; i++)
            answer[i] = nums[nums[i]];
        return answer;
    }
};

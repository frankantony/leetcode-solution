class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> stack;
        int last = INT_MIN, len = nums.size();
        for (int i = len - 1; i >= 0; i--) {
            if (nums[i] < last)
                return true;
            while (!stack.empty() && stack.top() < nums[i]) {
                last = stack.top();
                stack.pop();
            }
            stack.push(nums[i]);
        }
        return false;
    }
};

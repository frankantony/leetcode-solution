class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int> > pq;
        int len = nums.size();
        for (int i = 0; i < len; i++)
            pq.push(nums[i]);
        
        int i = 0;
        while (i < k) {
            int value = pq.top() + 1;
            pq.pop();
            pq.push(value);
            i++;
        }

        long long result = 1;
        while (!pq.empty()) { 
            result *= pq.top();
            result %= 1000000007;
            pq.pop(); 
        }
        return result;
    }
};

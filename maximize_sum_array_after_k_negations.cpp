class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int> > pq;
        int len = nums.size();

        for (int i = 0; i < len; i++)
            pq.push(nums[i]);
        
        int cont = 0;
        while (cont < k) {
            int t = pq.top();
            pq.pop();
            pq.push(-t);
            cont++;
        }

        int sum = 0;
        while (!pq.empty()) {
            int t = pq.top();
            pq.pop();
            sum += t;
        }

        return sum;
    }
};

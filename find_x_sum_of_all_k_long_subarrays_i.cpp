class Solution {
public:
    struct cmp {
        bool operator() (pair<int, int> a, pair<int, int> b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second < b.second;
        }
    };

    int x_sum (vector<int>& nums, int q, int k, int x, map<int, int>& frequence) {
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        for (map<int, int>::iterator it = frequence.begin(); it != frequence.end(); ++it)
            pq.push ({it->first, it->second});
        int cont = 0, result = 0;
        while (cont < x && !pq.empty()) {
            pair<int, int> p = pq.top();
            pq.pop();
            result += p.first * p.second;
            cont++;
        }

        return result;
    }

    vector<int> findXSum(vector<int>& nums, int k, int x) {
        map<int, int> frequence;
        int sum = 0, len = nums.size();
        for (int i = 0; i < k; i++) {
            frequence[nums[i]]++;
            sum += nums[i];
        }

        vector<int> answer;
        int value = x_sum (nums, 0, k, x, frequence);
        if (k == x)
            answer.push_back(sum);
        else
            answer.push_back(value);
        
        for (int i = 1; i < len - k + 1; i++) {
            frequence[nums[i-1]]--;
            frequence[nums[i+k-1]]++;
            sum -= nums[i-1];
            sum += nums[i+k-1];
            value = x_sum (nums, i, k, x, frequence);
            if (k == x)
                answer.push_back(sum);
            else
                answer.push_back(value);
        }
        return answer;
    }
};

class Solution {
public:
    struct comp
    {
        template<typename T>
        bool operator()(const T &l, const T &r) const
        {
            if (l.second != r.second) {
                return l.second > r.second;
            }
    
            return l.first < r.first;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        int len = nums.size();
        map<int, int> freq;
        for (int i = 0; i < len; i++)
            freq[nums[i]]++;

        set<pair<int, int>, comp> set(freq.begin(), freq.end());

        vector<int> result;
        int count = 0;
        for (auto const &pair: set) {
            count++;
            result.push_back(pair.first);
            if (count == k)
                break;
        }

        return result;
    }
};

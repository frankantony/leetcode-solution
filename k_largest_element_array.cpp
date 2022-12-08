class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int, int> table;
        int len = nums.size();
        for (int i = 0; i < len; i++)
            table[nums[i]]++;
        
        map<int, int>::iterator it;
        int cont = 0, result;
        for (it = table.begin(); it != table.end(); it++) {
            cont += it->second;
            if (cont >= len - k + 1) {
                result = it -> first;
                break;
            }
        }
        return result;
    }
};

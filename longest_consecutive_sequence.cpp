class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        
        map<int, bool> table;
        for (int i = 0;i < nums.size(); i++)
            table[nums[i]] = true;
        
        map<int, bool>::iterator it = table.begin();
        
        int previous = it->first, cont = 1, result = 1;
        it++;
        while (it != table.end()) {
            int current = it->first;
            if (previous == current - 1)
                cont++;
            else {
                result = max (result, cont);
                cont = 1;
            }
            previous = current;
            it++;
        }
        
        result = max (result, cont);
        return result;
        
    }
};

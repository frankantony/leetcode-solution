class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int len = arr.size();
        map<int, int> table;
        for (int i = 0; i < len; i++)
            table[arr[i]]++;
        for (int i = 0; i < len; i++)
            if (arr[i] != 0 && table[2 * arr[i]] != 0 || (table[2 * arr[i]] > 1))
                return true;
        return false;
    }
};

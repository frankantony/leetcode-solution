class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort (arr.begin(), arr.end());
        int len = arr.size(), diff = arr[1] - arr[0];
        for (int i = 1; i < len - 1; i++) {
            int current = arr[i + 1] - arr[i];
            if (current != diff)
                return false;
            diff = current;
        }
        return true;
    }
};

class Solution {
public:
    bool isArithmeticRearragend (vector<int>& nums, int l, int r) {
        int diff = nums[l + 1] - nums[l];
        for (int i = l + 1; i < r; i++) {
            int currentDiff = nums[i + 1] - nums[i];
            if (diff != currentDiff)
                return false;
            diff = currentDiff;
        }
        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int lenL = l.size(), lenNums = nums.size();
        vector<bool> answer(lenL, 0);
        vector<int> aux;
        for (int i = 0; i < lenL; i++) {
            aux = nums;
            sort (aux.begin() + l[i], aux.begin() + r[i] + 1);
            answer[i] = isArithmeticRearragend (aux, l[i], r[i]);
        }
        return answer;
    }
};

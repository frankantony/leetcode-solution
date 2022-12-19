class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len = numbers.size();
        int i = 0, j = len - 1, current;
        vector<int> result;
        while (i <= j) {
            current = numbers[i] + numbers[j];
            if (current == target)
                break;
            else if (current > target)
                j--;
            else
                i++;
        }

        result.push_back(i + 1);
        result.push_back(j + 1);
        return result;
    }
};

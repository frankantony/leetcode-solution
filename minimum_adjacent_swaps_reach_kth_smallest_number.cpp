class Solution {
public:
    void nextPermutation(string& nums) {
        int len = nums.size(), l = len - 2;
        while (l >= 0 && nums[l] >= nums[l + 1])
            l--;

        if (l >= 0) {
            int r = len - 1;
            while (r > l && nums[r] <= nums[l])
                r--;
            swap(nums[r], nums[l]);
        }

        reverse(nums.begin() + l + 1, nums.end());
    }

    int minimumAdjacentSwaps (string a, string b) {
        int len = a.size();

        int result = 0;
        for (int i = 0; i < len; i++) {
            if (a[i] != b[i]) {
                int j = i;
                while (a[j] != b[i]) j++;
                result += j - i;
                while (j > i) {
                    a[j] = a[j-1];
                    j--;
                }
            }

        }

        return result;
    }

    int getMinSwaps(string num, int k) {
        string initial = num;
        for (int i = 0; i < k; i++)      
            nextPermutation(num);
        
        int result = minimumAdjacentSwaps(initial, num);
        return result;
    }
};

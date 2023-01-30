class Solution {
public:
    static int cmp (int x, int y) {
        return x > y;
    }
    vector<int> sortEvenOdd(vector<int>& nums) {
        int len = nums.size();
        vector<int> odd, even;
        for (int i = 0; i < len; i++) {
            if (i % 2 != 0)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), cmp);

        int index_odd = 0, index_even = 0;
        for (int i = 0; i < len; i++) {
            if (i % 2 != 0)
                nums[i] = odd[index_odd++];
            else
                nums[i] = even[index_even++];
        }

        return nums;
    }
};

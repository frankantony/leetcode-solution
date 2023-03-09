class Solution(object):
    def missingNumber(self, nums):
        l = len(nums)
        sum_len = ((l + 1) * l) / 2
        sum_vector = sum(nums)
        return sum_len - sum_vector

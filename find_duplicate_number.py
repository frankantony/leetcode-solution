class Solution(object):
    def findDuplicate(self, nums):
        dict = {}
        for num in nums:
            if (num in dict):
                return num
            dict[num] = True
        return 0

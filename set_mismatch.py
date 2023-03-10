class Solution(object):
    def findErrorNums(self, nums):
        dict = {}
        result = []
        for num in nums:
            if (num in dict):
                result.append(num)
            else:
                dict[num] = 1
        
        for i in range(1, len(nums) + 1):
            if (i not in dict):
                result.append(i)

        return result

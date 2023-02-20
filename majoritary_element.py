class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        lenght = len(nums)
        frequence = {}
        print(1 in frequence.keys())
        for num in nums:
            if num in frequence.keys():
                frequence[num] = frequence[num] + 1
            else:
                frequence[num] = 1

            if (frequence[num] > math.floor(lenght/2)):
                return num

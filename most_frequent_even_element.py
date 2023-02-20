class Solution(object):
    def mostFrequentEven(self, nums):
        frequence = {}
        frequenceMaxEven = 0
        result = -1
        for num in nums:
            if num in frequence.keys():
                frequence[num] = frequence[num] + 1
            else:
                frequence[num] = 1
                                  
            if (num % 2 == 0):
                if (frequence[num] > frequenceMaxEven):
                    result = num
                    frequenceMaxEven = frequence[num]
                
                if (frequence[num] == frequenceMaxEven):
                    if (result > num):
                        result = num
                
        return result

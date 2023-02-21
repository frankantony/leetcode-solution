class Solution(object):
    def productExceptSelf(self, nums):
        length = len(nums)
        answer = [0] * length
        zeroes = 0
        indexZero = 0
        product = 1
        for i in range(length):
            if (nums[i] != 0):
                product = product * nums[i]
            else:
                zeroes = zeroes + 1
                indexZero = i
        
        if (zeroes >= 2):
            return answer
        elif (zeroes == 1):
            answer[indexZero] = product
            return answer
        
        for i in range(length):
            if (nums[i] != 0):
                answer[i] = product / nums[i]
        
        return answer
        


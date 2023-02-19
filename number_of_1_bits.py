class Solution(object):
    def hammingWeight(self, n):
        cont = 0
        while (n):
            cont = cont + (n % 2)
            n = n / 2
            
        return cont

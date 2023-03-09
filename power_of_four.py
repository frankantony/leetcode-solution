class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if (n <= 0):
            return False
        value = math.log(n, 4)
        frac = value - int(value)
        return frac == 0

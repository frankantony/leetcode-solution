class Solution(object):
    def beautifulArray(self, n):
        def solve (n):
            if (n == 1):
                return [1]
            odd = [2 * i - 1 for i in solve((n+1)//2)]
            even = [2 * i for i in solve(n//2)]
            return odd + even
        return solve (n)

class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        x = 1
        while x < n:
            x *= 2
        return n == x
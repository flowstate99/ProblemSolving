class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n < 0:
            x = 1/x
            n = -n
        res = 1
        curr_product = x
        while n > 0:
            if n%2:
                res *= curr_product
            curr_product *= curr_product
            n //= 2
        return res
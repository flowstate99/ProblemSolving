import math


n = int(input())
if n % 2 == 1:
    n //= 2
    n -= 1
    print(n + 1)
    print(3, end=" ")
else:
    n //= 2
    print(n)

for _ in range(n):
    print(2, end = " ")
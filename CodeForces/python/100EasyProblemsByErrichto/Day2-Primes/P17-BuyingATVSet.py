import math

a,b,x,y = map(int, input().split())

g = math.gcd(x, y)

x = x/g
y = y/g

print(int(min(a/x, b/y)))
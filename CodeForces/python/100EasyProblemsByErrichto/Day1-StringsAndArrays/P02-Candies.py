n = int(input())

arr = list(map(int, input().split()))

a, b = map(int, input().split())
res = 0
for i in range(a,b + 1):
    res += arr[i]

print(res)
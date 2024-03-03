n = int(input())
out = ""

arr = list(map(int, input().split()))
arr.reverse()

for i in range(len(arr)):
    print(arr[i], end = " ")
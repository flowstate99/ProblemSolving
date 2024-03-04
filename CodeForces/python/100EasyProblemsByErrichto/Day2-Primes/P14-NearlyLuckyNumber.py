import sys
num = input()
luckyNums = 0
for i in range(len(num)):
    if num[i] == '4' or num[i] == '7':
        luckyNums += 1
if luckyNums == 4 or luckyNums == 7:
    print('YES')
else:
    print('NO')
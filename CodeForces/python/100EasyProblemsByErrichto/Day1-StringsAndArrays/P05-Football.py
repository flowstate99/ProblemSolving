import sys
players = input()

count = 1

for i in range(1,len(players)):
    if players[i-1] == players[i]:
        count += 1
        if count == 7:
            print("YES")
            sys.exit()
    else:
        count = 1
print("NO")
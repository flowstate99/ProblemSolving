n = int(input())

for _ in range(n):
    word = input()
    out = ""
    if len(word) > 10:
        out += word[0]
        out += str(len(word) - 2)
        out += word[len(word) - 1]
    else:
        out = word
    print(out)
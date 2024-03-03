
n = int(input())
lines = ""
for i in range(n):
	line = input()
	lines = lines + line
print(lines)
out = ''
count = 1
for i in range(1, len(lines)):
	if lines[i] == lines[i - 1]:
		count += 1
	else:
		out += str(count) + lines[i - 1]
		count = 1
out += str(count) + lines[len(lines) - 1]
print(out)
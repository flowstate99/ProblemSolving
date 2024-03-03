
n = int(input())

# shell_at_pos[i] stores the label of the shell located at position i
# The shells can be placed arbitrarily at the start.
shell_at_pos = [i for i in range(3)]

# counter[i] stores the number of times the shell with label i was picked
counter = [0 for _ in range(3)]

for _ in range(n):
	# Zero indexing: offset all positions by 1
	a, b, g = map(lambda x:int(x) - 1, input().split())

	# Perform Bessie's swapping operation
	shell_at_pos[a], shell_at_pos[b] = shell_at_pos[b], shell_at_pos[a]

	# Count the number of times Elsie guesses each particular shell
	counter[shell_at_pos[g]] += 1

print(max(counter))
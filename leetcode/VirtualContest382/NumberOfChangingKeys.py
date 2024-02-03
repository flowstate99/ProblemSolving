class Solution:
	def countKeyChanges(self, s: str) -> int:
		lowered = s.lower()
		count = 0
		for i in range(1, len(lowered)):
			if lowered[i] != lowered[i -1]:
				count += 1
		return count


def	main():
    sol = Solution()
    print(sol.countKeyChanges("aAbBcC"))

if __name__ == "__main__":
	main()
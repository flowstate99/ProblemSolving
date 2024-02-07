class Solution:
	def countOdds(self, low: int, high: int) -> int:
		if low % 2 == 0:
			low += 1
		if high % 2 == 0:
			high -= 1
		count = (high - low)//2 + 1
		return count


def	main():
    sol = Solution()
    print(sol.countOdds(3, 7))
class Solution:
	def theMaximumAchievableX(self, num: int, t: int) -> int:
		return num + 2*t

def main():
	solution = Solution()
	num = 3
	t = 2
	result = solution.theMaximumAchievableX(num, t)
	print(f"The maximum achievable X is: {result}")

if __name__ == "__main__":
	main()


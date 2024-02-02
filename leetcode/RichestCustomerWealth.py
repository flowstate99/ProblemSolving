from typing import List

class	Solution:
	def	maximumWealth(self, accounts: List[List[int]]) -> int:
		max = 0
		for i in range(0, len(accounts)):
			temp = sum(accounts[i])
			if temp >= max:
				max = temp
		return max

def	main():
	sol = Solution()
	accounts = [[2,8,7],[7,1,3],[1,9,5]]
	print(sol.maximumWealth(accounts))

if __name__ == "__main__":
	main()
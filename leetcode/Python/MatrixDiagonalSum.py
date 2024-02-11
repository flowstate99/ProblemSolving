from typing import List

class	Solution:
	def	diagonalSum(self, mat: List[List[int]]) -> int:
		sum = 0
		# fastest solution:
		# n = len(mat)
		# for i in range(n):
		# 	sum += mat[i][i]
		# 	sum += mat[n - i -1][i]
		# if n % 2 != 0:
		# 	sum -= mat[n // 2][n // 2]

		# my solution:
		i = j = 0
		while i < len(mat) and j < len(mat[0]):
			sum += mat[i][j]
			mat[i][j] = 0 # convert any element that you have already added to 0 so you can iterate without readding it again on the reverse loop
			i+= 1
			j+=1
		i, j = len(mat) - 1, 0
		while i >= 0 and j < len(mat[0]):
			sum += mat[i][j]
			i -= 1
			j +=1
		return sum

def	main():
	sol = Solution()
	mat = [[1,2,3],
				[4,5,6],
				[7,8,9]]
	print("res: ",sol.diagonalSum(mat))

if __name__ == "__main__":
	main()